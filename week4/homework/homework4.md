# Homework Week 4

## 1) What does the following program do? Is it valid? If not, why not?

    string s;
    cout << s[0] << endl;

## 2) Which, if any, of the following vector definitions are in error? For those that are legal, explain what the definition does. For those that are not legal, explain why they are illegal.

    (a) vector<vector<int>> ivec;
    (b) vector<string> svec = ivec;
    (c) vector<string> svec(10, "null");


## 3) How many elements are there in each of the following vectors? What are the values of the elements?

    (a) vector<int> v1; 
    (b) vector<int> v2(10);
    (c) vector<int> v3(10, 42);
    (d) vector<int> v4{10};
    (e) vector<int> v5{10, 42}; 
    (f) vector<string> v6{10};
    (g) vector<string> v7{10, "hi"};

## 4) Is there any error in the following code? 

    int array_size = 10;
    int ia[array_size];
    for (int ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;

## 5) Write a program that reads a string of characters including punctuation and writes what was read but with the punctuation removed.

## 6) Write a program to read a sequence of ints from cin and store those values in a vector.

## 7) Modify your program in 6) above to read strings this time.

## 8) Write a program to copy a vector of ints into an array of ints.