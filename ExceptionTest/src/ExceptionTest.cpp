//============================================================================
// Name        : ExceptionTest.cpp
// Author      : doremi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int a = 0;
	int b = 0;

	cout << "please input a: " << endl;
	cin >> a;

	cout << "please input b: " << endl;
	cin >> b;

	try {

		if(b == 0)
			throw 0;

		cout << "a/b = " << static_cast<double> (a)/b << endl;
	}
	catch(int err) {
		cout << "catch the error value: " << err << endl;
	}


	cout << "!!!Hello Doremi!!!" << endl; // prints !!!Hello Doremi!!!
	return 0;
}
