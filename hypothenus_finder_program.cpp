// hypothenus finder program

#include <iostream>
#include <cmath>

using namespace std;

int main () {
	
double a;
double b;


cout << "Enter the first number: " << endl;
cin >> a;

cout << "Enter the second number: " << endl;
cin >> b;

double c = sqrt(pow(a, 2) + pow(b, 2));
cout << "The hypothenus is: " << c << endl;


	return 0;
}