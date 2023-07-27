# Homework Week 5

## 1) Indicate which of the following functions are in error and why. Suggest how you might correct the problems.

    (a) int f() {
        string s;
        // . . .
        return s;
        }
    (b) f2(int i) { /* . . . */ }
    (c) int calc(int v1, int v1) /* . . . */ }
    (d) double square(double x) return x * x;

## 2) Assuming T is the name of a type, explain the difference between a function declared as 
    void f(T) 
and 
    void f(T&)


## 3) Explain the behavior of the following function. If there are problems in the code, explain what they are and how you might fix them.

    void print(const int ia[10])
    {
        for (size_t i = 0; i != 10; ++i)
            cout << ia[i] << endl;
    }

## 4) Given the following declarations, determine which calls are legal and which are illegal. For those that are illegal, explain why.

    double calc(double);
    int count(const string &, char);
    int sum(vector<int>::iterator, vector<int>::iterator, int);
    vector<int> vec(10);
    (a) calc(23.4, 55.1); 
    (b) count("abcda", ’a’);
    (c) calc(66);
    (d) sum(vec.begin(), vec.end(), 3.8);

## 5) Write a function that will calculate all factors of an integer

    function name: factor()
    input: int n
    output: a vector of integers with each element being a unique factor of n

## 6) Write a function that will calculate the GCD (greated common divisor) of two integers. Use factor() function defined in 5)

    function name: gcd()
    input: int a, int b
    output: gcd of (a, b)

## 7) Write a function that determines whether an input integer is a prime or not.

    function name: isPrime()
    input: int 
    output: bool

## 8) Write a program that will produce a list of prime numbers that are less than a given input integer. Use isPrime() function in 7) if needed.  


    function name: prime_list()
    input: int n
    output: a list of prime numbers

Main program: prompt user to enter a number and store it as integer n.  
Call prime_list() and print the list of primes on screen.
