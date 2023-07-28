# Homework Week 6

## 1) What is the output of following C++ program?  sizeof() is a standard C++ function to check the memory size (in bytes) of a variable.

    #include<iostream>
    using namespace std;
    
    class Empty {};
    
    int main()
    {
    cout << sizeof(Empty);
    return 0;
    }

A) non-zero value  
B) 0  
C) Compiler error  
D) Run time error  

## 2) What is the output of following C++ program?

    class Test {
        int x; 
    };
    int main(){
        Test t;
        cout << t.x;
        return 0;
    }

A) 0
B) A garbage value  
C) Compiler error  
D) Run time error 

## 3) Which of the following is true?
A) All objects of a class share all data members of class  
B) Objects of a class do not share non-static members. Every object has its own copy.  
C) Objects of a class do not share codes of non-static methods, they have their own copy.
D) None of the above 

## 4) Which of the following is true about the following program?

    #include <iostream>
    using namespace std;
    class Test
    {
    public:
        int i;
        void get();
    };
    void Test::get()
    {
        cout << "Enter the value of i: ";
        cin >> i;
    }
    Test t;  // Global object
    int main()
    {
        Test t;  // local object
        t.get();
        cout << "value of i in local t: "<<t.i<<'n';
        ::t.get(); 
        cout << "value of i in global t: "<<::t.i<<'n';
        return 0;
    }

    
A) Compiler Error: Cannot have two objects with same class name.  
B) Compiler error in Line "::t.get();"
C) Run time error.
D) Compiles and runs fine.

## 5) A member function can always access the data in __________  (in C++).

A) the class of which it is member
B) the object of which it is a member
C) the public part of its class
D) the private part of its class

## 6) Write a C++ class called "Factor" which includes the following attributes and methods:

- private attributes: 
    - int n
    - vector<int> factors
- public methods: 
    - read() get an integer from a user input and save to n
    - getFactors() get all factors of n and store them in factors.
    - printFactors() print all elements of vector factors.  If factors is empty, call getFactors() to populate vector factors first.

Declare and define this class. 

Test your class in a main program.
