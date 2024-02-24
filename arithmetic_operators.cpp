// Arithmatic operators

#include <iostream>
#include <string>
using namespace std;

int main () {	

int x;

cout << "Enter a number: " << endl;
cin >> x;

int sum = x % 2;

if (sum == 0) {
cout << "This is an even number." << '\n';
} else {
	cout << "This is an odd number." << endl;
}


	return 0;
}