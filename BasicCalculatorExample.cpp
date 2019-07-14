//The BasicCalculatorExample's purpose is to display the importance of templates in C++ and how you can utilize them
//This program can take any type of data set by utilizing template functions in order to do the basic functions of 
// a calculator using the same functions but in a different instance with different data types

#include "pch.h"
#include <iostream>
using namespace std;

//Utilizing Templates in order to have any types of data set
template<class MyType>
	MyType add(MyType x, MyType y) {
	return x + y;
}

	template<class MyType>
	MyType divide(MyType x, MyType y) {
		try {
			//Catching if y is equal to 0
			if (y == 0) {
				throw 0;
			}
			//Also if you want to catch all errors then you would want to use (...) 
			}catch (MyType x) {
			cout << "ERROR: Can't Divide by zero, stupid!" << x << endl;
			return 0;
			}
	return x / y;
}


	template<class MyType>
	MyType multiply(MyType x, MyType y) {
		return x * y;
	}


	template<class MyType>
	MyType subtract(MyType x, MyType y) {
		return x - y;
	}

	template<class MyType>
	MyType square(MyType x) {
		return x  *  x;
	}

int main()
{
	//Setting int values for x, y
	int x = 50;
	int y = 3;

	//Setting for doubles
	double w = 20.25;
	double v = 15.13;

	//Setting for float
	float t = 7.5;
	float s = 3.2;

	//Add function
	cout << "The result of " << x << " added by " << y << " is: " << add(x, y) << endl;
	cout << "The result of " << w << " added by " << v << " is: " << add(w, v) << endl;
	cout << "The result of " << t << " added by " << s << " is: " << add(t, s) << endl;

	//Subtract function
	cout << "The result of " << x << " subtracted by " << y << " is: " << subtract(x, y) << endl;
	cout << "The result of " << w << " subtracted by " << v << " is: " << subtract(w, v) << endl;
	cout << "The result of " << t << " subtracted by " << s << " is: " << subtract(t, s) << endl;

	//Divide function
	cout << "The result of " << x << " divided by " << y << " is: " << divide(x, y) << endl;
	cout << "The result of " << w << " divided by " << v << " is: " << divide(w, v) << endl;
	cout << "The result of " << t << " divided by " << s << " is: " << divide(t, s) << endl;

	//Multiply function
	cout << "The result of " << x << " multiplied by " << y << " is: " << multiply(x, y) << endl;
	cout << "The result of " << w << " multiplied by " << v << " is: " << multiply(w, v) << endl;
	cout << "The result of " << t << " multiplied by " << s << " is: " << multiply(t, s) << endl;

	//Square function
	cout << "The result of " << x << " squared by " << " is: " << square(x) << endl;
	cout << "The result of " << w << " squared by " << " is: " << square(w) << endl;
	cout << "The result of " << t << " squared by " << " is: " << square(t) << endl;

	int a = 2, b = 0;

	//Checking Exception ERRORS
	cout << "The result of the Exception is: " << a << " divided by " << b << " is: " << divide(a, b) << endl;
}

/* result of 50 added by 3 is: 53
The result of 20.25 added by 15.13 is: 35.38
The result of 7.5 added by 3.2 is : 10.7
The result of 50 subtracted by 3 is : 47
The result of 20.25 subtracted by 15.13 is : 5.12
The result of 7.5 subtracted by 3.2 is : 4.3
The result of 50 divided by 3 is : 16
The result of 20.25 divided by 15.13 is : 1.3384
The result of 7.5 divided by 3.2 is : 2.34375
The result of 50 multiplied by 3 is : 150
The result of 20.25 multiplied by 15.13 is : 306.382
The result of 7.5 multiplied by 3.2 is : 24
The result of 50 squared by  is : 2500
The result of 20.25 squared by  is : 410.063
The result of 7.5 squared by  is : 56.25
*/
