#include <iostream>
#include "Student.h"
#include "Comparator.h"
using namespace std;

int main()
{

	Student Vasile;
	Vasile.setEngGrade(9.5);
	Vasile.setMathGrade(9);
	Vasile.setHisGrade(8.5);
	
	Student Costel;
	Costel.setEngGrade(5);
	Costel.setMathGrade(6);
	Costel.setHisGrade(7.7);

	cout << "Vasile's average grade is : " << Vasile.getAvgGrade() << endl;
	cout << "Costel's average grade is : " << Costel.getAvgGrade() << endl;

	cout << compAvgGrade(Vasile, Costel);

	return 0;
}

