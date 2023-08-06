# Homework Week 7

## 6) Write a C++ class called "Factor" which includes the following attributes and methods:

- private attributes: 
    - int n
    - vector<int> factors
- public methods: 
    - read() get an integer from a user input and save to n
    - getFactors() get all factors of n and store them in factors.
    - printFactors() print all elements of vector factors.  If factors is empty, call getFactors() to populate vector factors first.

Declare and define this class. Include a default constructor and anoter constructor that takes n as input.

Test your class in a main program.

## 7) Derive a class called "PrimeFactor" from the base class of "Factor".  Add the following new attributes and new methods in this "PrimeFactor" derived class:

- private attributes: 
    - vector<int> primeFactors: store a list of prime factors for n
    - vector<int> exponents: store a list of exponents corresponding to the prime factors  
- public methods: 
    - getPrimeFactors() get all prime factors of n and store them in primeFactors and exponents.
    - printPrimeFactors() print all elements of prime Factors and its exponents.  If primeFactors is empty, call getPrimeFactors() to populate vector factors first.  Output in the format of 
    
    prime1^exponent1*prime2^exponent2*...


Test your PrimeFactor class in a main program.  Read an integer input, print all factors and all prime factorizations.