// simple calculator program

#include <iostream>
#include <string>

using namespace std;

int main () {
	
	int num1;
	int num2;

	cout << "Enter a number: ";
	cin >> num1;

	cout << "Enter a second number: ";
	cin >> num2;

	int sum = num1 + num2;
	cout << "The sum is: " << sum << '\n';


	return 0;
}