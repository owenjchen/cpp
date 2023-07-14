/*
Homework for Week 3

2) Is the following program legal? If so, what values are printed?

int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
sum += i;
cout << i << " " << sum << endl;

3) Write a program that uses a while to sum the numbers from 50 to 100.

4) Write a C++ program using a for loop to print out the first 20 Fibonacci numbers like this:
First 20 Fibonacci Numbers:
1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 

5) Write a C++ program to print all printable symbols and their corresponding ASCII codes.
The first printable symbol with the smallest ASCII code is ! and its ASCII code is 33 and the last printable symbol with the largest ASCII code of 126 is ~
Your output should be like this:

Symbol: ASCII Code
!: 33
": 34
#: 35
...
}: 125
~: 126

*/

#include <iostream>
using namespace std;
int main(){
    // Problem 2)
    cout << "Problem 2)" << endl;
    int i = 100, sum = 0;
    for (int i = 0; i != 10; ++i)
    sum += i;
    cout << i << " " << sum << endl;

    // Problem 3)
    cout << "Problem 3)" << endl;
    int s = 0;
    int start = 50, end = 100;
    int j = start;
    while(j <= end){
        s +=j;
        j++;
    }
    cout << "Sum from " << start << " to " << end << " is " << s << endl;

    //Problem 4) - See fibonacci_numbers.cpp and fibonacci_numbers_v2.cpp

    //Problem 5) see print_ascii_table.cpp
}