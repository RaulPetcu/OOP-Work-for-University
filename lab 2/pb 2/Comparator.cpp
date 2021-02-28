#include <iostream>
#include <string>
#include "Student.h"



int compName(Student s1, Student s2) {
	if (s1.getName().compare(s2.getName()) < 0)
		return 1;
	else
		if (s1.getName().compare(s2.getName()) > 0)
			return 0;
		else
			return -1;
}

//math
int compMathGrade(Student s1, Student s2) {
	if (s1.getMathGrade() > s2.getMathGrade())
		return 1;
	else
		if (s1.getMathGrade() < s2.getMathGrade())
			return -1;
		else
			return 0;
}

//eng
int compEngGrade(Student s1, Student s2) {
	if (s1.getEngGrade() > s2.getEngGrade())
		return 1;
	else
		if (s1.getEngGrade() < s2.getEngGrade())
			return -1;
		else
			return 0;
}

//his
int compHisGrade(Student s1, Student s2) {
	if (s1.getHisGrade() > s2.getHisGrade())
		return 1;
	else
		if (s1.getHisGrade() < s2.getHisGrade())
			return -1;
		else
			return 0;
}

int compAvgGrade(Student s1, Student s2) {
	if (s1.getAvgGrade() > s2.getAvgGrade())
		return 1;
	else
		if (s1.getAvgGrade() < s2.getAvgGrade())
			return -1;
		else
			return 0;

}