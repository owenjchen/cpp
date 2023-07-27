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
using namespace std;

#include "Sales_data.h"

int main()
{
	Sales_data data1, data2;
	cout << "Enter a book ISBN, sales quantity,and price:" ;
	if (read(cin, data1)) {  // read the transactions
		cout << "Enter another book ISBN, sales quantity,and price:" ;
		if (read(cin, data2)) {
			if (data1.isbn() == data2.isbn()) {      // check isbns
				data1.combine(data2);                // add the transactions
				cout << "ISBN, sales quantity, revenue, and average selling price:" << endl;
				print(cout, data1);                  // print the results
				cout << endl;                        // followed by a newline 
			} else {
				cout << "These two books are different - do not combine:" << endl;
				cout << "ISBN, quantity, revenue, and price:" << endl;
				print(cout, data1);  
				cout << endl; 
				print(cout, data2);   
				cout << endl;      
			}
		}
	} else
		cerr << "Input failed!" << endl;        

	return 0;
}
