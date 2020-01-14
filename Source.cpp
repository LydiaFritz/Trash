//Lydia Fritz
//Lucky 7
//This is my own work.

#include <iostream>

using namespace std;

int main() {
	//Write a program that reads in 5 integers and prints 
	//the largest and the smallest of the group.

	//create 5 ints
	int a, b, c, d, e;

	//get user input
	cout << "Enter 5 integers: ";
	cin >> a >> b >> c >> d >> e;

	//for testing
	//cout << "The numbers are " << a << " " << b << " " << c << " " << d << " " << e << endl;

	//find the largest
	int largest = a;
	if (b > largest) largest = b;
	if (c > largest)largest = c;
	if (d > largest)largest = d;
	if (e > largest)largest = e;

	cout << "The largest value is " << largest << endl;



	return 0;
}