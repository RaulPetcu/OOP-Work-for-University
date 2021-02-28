#include <iostream>
#include "Student.h"

//name
string Student::getName() {
	return name;
}
void Student::setName(string newName) {
	name = newName;
}

//math
float Student::getMathGrade() {
	return mathGrade;
}
void Student::setMathGrade(float newGrade) {
	mathGrade = newGrade;
}

//eng
float Student::getEngGrade() {
	return engGrade;
}
void Student::setEngGrade(float newGrade) {
	engGrade = newGrade;
}

//history
float Student::getHisGrade() {
	return hisGrade;
}
void Student::setHisGrade(float newGrade) {
	hisGrade = newGrade;
}

float Student::getAvgGrade() {
	return (getMathGrade() + getEngGrade() + getHisGrade()) / 3;
}