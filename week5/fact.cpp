/*
 * This file contains code from "C++ Primer, Fifth Edition", by Stanley B.
 * Lippman, Josee Lajoie, and Barbara E. Moo, and is covered under the
 * copyright and warranty notices given in that book:
 * 
 * "Copyright (c) 2013 by Objectwrite, Inc., Josee Lajoie, and Barbara E. Moo."
 * 
 * 
 * "The authors and publisher have taken care in the preparation of this book,
 * but make no expressed or implied warranty of any kind and assume no
 * responsibility for errors or omissions. No liability is assumed for
 * incidental or consequential damages in connection with or arising out of the
 * use of the information or programs contained herein."
 * 
 * Permission is granted for this code to be used for educational purposes in
 * association with the book, given proper citation if and when posted or
 * reproduced.Any commercial use of this code requires the explicit written
 * permission of the publisher, Addison-Wesley Professional, a division of
 * Pearson Education, Inc. Send your request for permission, stating clearly
 * what code you would like to use, and in what specific way, to the following
 * address: 
 * 
 * 	Pearson Education, Inc.
 * 	Rights and Permissions Department
 * 	One Lake Street
 * 	Upper Saddle River, NJ  07458
 * 	Fax: (201) 236-3290
*/ 

#include <iostream>
#include <array>
#include <chrono>
using namespace std;
using namespace std::chrono;
// declarations of our factorial functions
// definitions are in LocalMath.cc
#include "LocalMath.h"

int main()
{
	array<int, 9>  n{0, 5, 6, 7, 8, 9, 10, 20, 40};
	//Version 1 - while loop
	auto time_start = high_resolution_clock::now();
	cout << "Factorial function - Version 1: fact() - while loop" << endl;
	for(int i:n) cout << i <<  "! = " << fact(i) << endl;
	auto run_time = duration_cast<microseconds>(high_resolution_clock::now() - time_start);
	cout << "Elapsed Time = " << run_time.count() << " microseconds (1/million seconds)" << endl;

	//Version 2 - recursive function
	time_start = high_resolution_clock::now();
	cout << "Factorial function - Version 2: factorial() - recursive function" << endl;	
	for(int i:n) cout << i <<  "! = " << factorial(i) << endl;
	run_time = duration_cast<microseconds>(high_resolution_clock::now() - time_start);
	cout << "Elapsed Time = " << run_time.count() << " microseconds (1/million seconds)" << endl;	
}

