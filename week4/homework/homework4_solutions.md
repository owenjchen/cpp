# Homework Week 4

## 1) What does the following program do? Is it valid? If not, why not?

    string s;
    cout << s[0] << endl;

### Solution:
The program declares a string variable s and outputs the first character of the string s.  It is valid.  However, since String s is not initialized, s[0] could be blank or any random value.

## 2) Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

    (a) vector<vector<int>> ivec;
    (b) vector<string> svec = ivec;
    (c) vector<string> svec(10, "null");

### Solution:

(a) is legal.  It declares ivec as a 2-dimension vector of integers (vector of vector of integers).

(b) It is invalid.  Can not assign a 2-d vector to a string of vector.

(c) It is valid.  svec is a vector of 10 string elements with each element being initialized as "null".


## 3) How many elements are there in each of the following vectors? What are the values of the elements?

    (a) vector<int> v1; 
    (b) vector<int> v2(10);
    (c) vector<int> v3(10, 42);
    (d) vector<int> v4{10};
    (e) vector<int> v5{10, 42}; 
    (f) vector<string> v6{10};
    (g) vector<string> v7{10, "hi"};

### Solution:

v1:0 elements  
v2:10 elements of 0  
v3:10 elements of 42  
v4:1 element of 10  
v5:2 elements of 10 and 42   
v6:10 elements of blank strings  
v7:10 elements of "hi"  


## 4) Is there any error in the following code? 

    int array_size = 10;
    int ia[array_size];
    for (int ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;

### Solution:

The code will compile and run without any error.  However, the last iteration of the for loop, ia[ix] with ix=10 is out of bound. ia[10] memory is not allocated - its value is unstable.  It could override another variable's value and it could also be overridden by another variable.   

## 5) Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

## 6) Write a program to read a sequence of ints from cin and store those values in a vector.

## 7) Modify your program in 6) above to read strings this time.

## 8) Write a program to copy a vector of ints into an array of ints.