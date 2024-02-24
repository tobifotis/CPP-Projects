#include <iostream>
using namespace std;

int main () {

double studentsScore = 9.7;
int totalPossibleScore = 10;

int gradeInPercentage = studentsScore / (double)totalPossibleScore * 100;

cout << "Congratulations! You got " <<  gradeInPercentage << " percent on this exam" << endl;





	return 0;
}