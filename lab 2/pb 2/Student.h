#pragma once
#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	float mathGrade, engGrade, hisGrade;
	float avg;

public:
	string getName();
	void setName(string newName);

	float getMathGrade();
	void setMathGrade(float newGrade);

	float getEngGrade();
	void setEngGrade(float newGrade);

	float getHisGrade();
	void setHisGrade(float newGrade);

	float getAvgGrade();


};