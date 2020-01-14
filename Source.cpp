//Lydia Fritz
//Lucky 7
//This is my own work.

#include <iostream>
#include <string>

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

	//find the smallest
	int smallest = a;

	//part 2
	//Write a program that calculates and prints 
	//the sum of the first 50 positive integers that are multiples of 7.
	int sum = 0;
	
	int i = 1;
	while (i <= 50) {
		sum = sum + i * 7;
		i++;
	}

	cout << "The sum of the first 50 positive multiples of 7 is " << sum << endl;


	return 0;
}