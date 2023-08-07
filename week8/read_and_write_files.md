# Read and Write Files in C++
C++ provides the following classes to perform output and input of characters to/from files:

- ofstream: Stream class to write on files
- ifstream: Stream class to read from files
- fstream: Stream class to both read and write from/to files.

These classes are derived directly or indirectly from the classes istream and ostream. We have already used objects whose types were these classes: cin is an object of class istream and cout is an object of class ostream. Therefore, we have already been using classes that are related to our file streams. And in fact, we can use our file streams the same way we are already used to use cin and cout, with the only difference that we have to associate these streams with physical files. 

## What Are C++ Streams?
C++ streams are interfaces for processing sequence-like input and output. If you’ve written a “Hello World” program in C++ before, then you have worked with streams. Let’s briefly go over how this would look:

    std::cout << "Hello World!\n";

In this example, we stream our string object into the character output stream (“cout” for short). cout is part of the iostream library, and an instance of the more general class of output streams (“ostream”). ostream’s sister class is “istream,” a class for handling input streams. 

When working with files, we employ another subclass of streams: the fstream class (for file stream) consists of ifstreams for input and ofstreams for output to file. For this example, we’ll work with ifstreams, since they allow us to read from a file. 

## File Handling in C++
To read a character sequence from a text file, we’ll need to perform the following steps:

## Create a stream object. 
1) Connect it to a file on disk. 
1)  Read the file’s contents into our stream object. 
1) Close the file.
The  steps that we examine in detail below, register under the action of “file handling.” At each stage, our stream object may occupy different states, which we can check for using the following member functions:

bad() returns True if an error occurred while reading from or writing to a stream. If a stream is “bad,” no further operations involving the stream are possible.
fail() returns True if an error occurs, but we can still operate on the  stream.
eof() returns True if the end of the file (EOF) is reached, with False returned otherwise.
good() returns True if each of the other three states are false, i.e., the stream is neither bad nor failed, nor has it reached the end of the file. 
Another important method is provided by is_open(). It evaluates to True if a stream object is open. Let’s now finally bring all the components together and read in a file in C++.

## Open a file
The first operation generally performed on an object of one of these classes is to associate it to a real file. This procedure is known as to open a file. An open file is represented within a program by a stream (i.e., an object of one of these classes; in the previous example, this was myfile) and any input or output operation performed on this stream object will be applied to the physical file associated to it.

- Open a file for output:

        string filename = "myfileout.txt";
        ofstream myfileout;
        myfileout.open(filename);


- Open a file for input:

        string filename = "myfilein.txt";
        ifstream myfilein;
        myfilein.open(filename);



## Read a File in C++
Say we have a shopping list stored in a .txt file:

    eggs
    ham
    eggs and spam
    spam and eggs
Our goal is to print the list’s contents to the console. Before we start writing our program, let’s include the relevant header files:

    #include <iostream>
    #include <fstream>
    #include <string>

We’re now ready to write our function. Let’s first declare our fstream variable and connect it to a stream object by opening the file:

    int main () {
    std::ifstream myfile; 
    myfile.open("shopping_list.txt");

Strictly speaking, we could have performed that action in a single line, using the class constructor to open the file directly when initializing the stream object:

    int main () {
    std::ifstream myfile ("shopping_list.txt"); // this is equivalent to the above method

Before we get to read the file’s contents into our stream, all that’s left to do is to declare a string variable that can hold the contents:

    std::string mystring;

## Read a File in C++ Using the >> Operator
For starters, let’s use the stream input operator >> to read in our list from the file.

    if ( myfile.is_open() ) { // always check whether the file is open
    myfile >> mystring; // pipe file's content into stream
    std::cout << mystring; // pipe stream's content to standard output
    }
Note that the ifstream destructor closes our file automatically,  which is one of the perks of using this class. If we wanted, we could have added an infile.close() command to the end of the program. This is seen as good practice, but it does not really add any value.

When we run that function, here’s the output we get on the screen:

    eggs

That’s not what we expected. Our function printed only the first item of our shopping list. That’s because the >> operator reads a string only until it encounters a white space character (such as a space or line break). To read the entire file, we can place the line into a while loop:

    if ( myfile.is_open() ) {
        while ( myfile.good() ) {
            myfile >> mystring;
            std::cout << mystring;
        }
    }

Once we reach the end of the file, myfile.good() evaluates to False, causing the while loop to terminate. We can abbreviate the condition as follows:

    while ( myfile ) {

This is equivalent to asking if our file is good. How does our code perform now?

    eggshameggsandspamspamandeggseggs

Two things happened here: All our shopping items got chained together, with the last item being printed twice. While the latter has to do with how C++ handles buffered data and is out of the scope of this tutorial, the first was to be expected. After all, >> ignores whitespace, meaning that all the space and newline characters get lost. How can we include that information in the output? The answer to that question lies in the get() function.

## Read a File in C++ Using get()
We’ll replace >> with get(), a member function of our fstream class that reads in one character at a time. The great thing about get() is that it does not ignore white space and instead treats it as a series of ordinary characters. To read in the file’s contents in their entirety, we’ll stick to our while-loop:

    if ( myfile.is_open() ) {
        char mychar;
        while ( myfile ) {
            mychar = myfile.get();
            std::cout << mychar;
        }
    }
How does the output of our little script look now?

    eggs
    ham
    eggs and spam
    spam and eggs
Success! Our entire shopping list was printed to the console. To demonstrate that this function really does stream each character one by one, let’s add a little functionality that tells us the position of the stream’s pointer after each output. 

    std::cout << ": " << myfile.tellg() << ", " ;
The tellg() function’s name is short for “tell get.” It returns the current position of the pointer as it moves through the input stream. Once the entire file has been traversed, tellg() returns the value -1. 

Let’s look at just the first two lines of the output after running the modified code:

    e: 2, g: 3, g: 4, s: 5,
    : 6, h: 7, a: 8, m: 9,
For every get() action, the standard output shows the letter of the input, and the position of the pointer. We can see that every character was indeed processed individually, causing the code to evaluate the pointer’s position after every single character, be it a letter or white space.

## Read a File in C++ Using getline()
For our use case, there’s little point in processing every character separately — after all, we want to print every line from our shopping list to the screen one by one. This calls for getline(), another member function, which reads in the text until it encounters a line break. Here’s how we would modify our code:

    string myline;
    if ( myfile.is_open() ) {
        while ( myfile ) {
            getline(myfile, myline);
            cout << myline << ": " << myfile.tellg() << '\n';
        }
    }
And here’s the output:

    eggs: 5
    ham: 9
    eggs and spam: 23
    spam and eggs: 37
The pointer’s position is now evaluated after every line read in by our file stream.

Here a typical example to read a text file by line and save the results in a vector of strings:


    # Read a text file by line and save to a vector of strings
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <vector>
    using namespace std;

    int main () {
        string filename = "example.txt";
        string line;
        vector<string> mylines;  
        ifstream myfile(filename);
        if (myfile.is_open()){
            while ( getline (myfile,line) )
            {
                mylines.push_back(line);
                cout << line << '\n';
            }
            myfile.close();
        } else {
            cout << "Unable to open file"; 
        }
        return 0;
    }
    

To wrap things up, here’s the final version of our script for reading a file in C++ line by line:

    #include <iostream>
    #include <fstream>
    #include <string>

    int main (){
        std::ifstream myfile;
        myfile.open("shopping_list.txt");
        std::string myline;
        if ( myfile.is_open() ) {
            while ( myfile ) { // equivalent to myfile.good()
                std::getline (myfile, myline);
                std::cout << myline << '\n';
            }
        } else {
            std::cout << "Couldn't open file\n";
        }
        return 0;      
    }

Adding an else-condition, as we did at the end of this script, is a good idea if you encounter a problematic file. Instead of simply terminating wordlessly, the script will tell you that it was not able to open the file.

## A Complete Example for Reading and Writing a File
See read_write_file.cpp

    // Read a text file by line and save to a vector of strings
    #include <iostream>
    #include <fstream>
    #include <string>
    #include <vector>
    using namespace std;

    int main () {
        string filename = "read_write_file.cpp";
        string fileout = filename.substr(0, filename.find('.')) + ".txt";
        string line;
        vector<string> mylines;  
        ifstream myfile(filename);
        ofstream myfileout(fileout);
        if (myfile.is_open()){
            while (getline(myfile,line))
            {
                mylines.push_back(line);
            }
            myfile.close();
            cout << "Here are lines stored in vector mylines:" << endl;
            for (auto l: mylines) {
                cout << l << endl;
            }
            if (myfileout.is_open()){
                for (auto l: mylines) {
                    myfileout << l << endl;
                }  
                myfileout.close(); 
                cout << "Contents saved to output file " << fileout << endl;
            } else {
                cout << "Can not open " << fileout << " to write." << endl;
            }
        } else {
            cout << "Can not open " << filename << " to read." << endl; 
        }
        return 0;
    }