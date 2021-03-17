#pragma once
#include "Number.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Number::Number(const char* value, int base) {
	if (base < 2 || base > 16) 
	{
		cout << "Choose a valid base\n";
		this->numValue = "";
		this->numBase = NULL;
	}
	else
	{
		this->numValue = value;
		this->numBase = base;
	}
}

Number::~Number() {
	cout << "\nDTOR\n";
}

//COPY CONSTRCUTOR
Number::Number(const Number& num) {
	this->numValue = num.numValue;
	this->numBase = num.numBase;
	cout << "CTOR\n";
}

//MOVE CONSTRUCTOR
Number::Number(Number &&num) {
	numValue = num.numValue;
	num.numValue = nullptr;

	numBase = num.numBase;
	num.numBase = NULL;
}


//OPERATORS
int Number::customConvert(const char* str) {
	stringstream myStream(str);
	int val = 0;
	myStream >> val;
	return val;
}

//int operator+(const Number& n1, const Number& n2){
//	return customConvert
//}

int Number::operator+(Number& n){
	if (this->numBase == n.numBase) {
		int x = customConvert(this->numValue);
		int y = customConvert(n.numValue);
		return x + y;
	}
	else {
		if (this->numBase > n.numBase) {
			n.SwitchBase(this->numBase);
			int x = customConvert(this->numValue);
			int y = customConvert(n.numValue);
			return x + y;
		}
		else {
			this->SwitchBase(n.numBase);
			int x = customConvert(this->numValue);
			int y = customConvert(n.numValue);
			return x + y;
		}
	}
}

Number& Number::operator=(int val) {
	//fac int to string
	string s = std::to_string(val);	
	const char* val2 = s.c_str();
	this->numValue = val2;
	return *this;// trebuie alocat pe heap ca sa nu se mai stearga cand iese din functie, dar nu stiu cum
}

//verificarea bazelor se face la fel ca la + la fiecare operator
int Number::operator-(Number& n) {
	if (this->numBase == n.numBase)
		return customConvert(this->numValue) - customConvert(n.numValue);
	else
		if (this->numBase < n.numBase) {
			this->SwitchBase(n.numBase);
			return customConvert(this->numValue) - customConvert(n.numValue);
		}
		else {
			n.SwitchBase(this->numBase);
			return customConvert(this->numValue) - customConvert(n.numValue);
		}
}

int Number::operator<(const Number& n) {
	if (customConvert(this->numValue) < customConvert(n.numValue))
		return 1;
	return -1;
}

int Number::operator>(const Number& n) {
	if (customConvert(this->numValue) > customConvert(n.numValue))
		return 1;
	return -1;
}

int Number::operator>=(const Number& n) {
	if (customConvert(this->numValue) >= customConvert(n.numValue))
		return 1;
	return -1;
}

int Number::operator<=(const Number& n) {
	if (customConvert(this->numValue) <= customConvert(n.numValue))
		return 1;
	return -1;
}

int Number::operator==(const Number& n) {
	if (customConvert(this->numValue) == customConvert(n.numValue))
		return 1;
	return -1;
}

bool Number::operator--(int val) {

	int len = strlen(this->numValue);
	//this->numValue[len - 1] = '\0'; // ?
	
	return false;
}

Number& Number::operator--() {
	this->numValue++;
	return *this;
}

//FUNCTIONS
void Number::SwitchBase(int newBase) {
	char* res = new char[100];
	numValue = fromDeci(res, newBase, toDeci(numValue, numBase));
	numBase = newBase;
}
int Number::val(char c)
{
	if (c >= '0' && c <= '9')
		return (int)c - '0';
	else
		return (int)c - 'A' + 10;
}
int Number::toDeci(const char* str, int base) {
	int len = strlen(str);
	int power = 1;
	int num = 0;
	int i;
	for (i = len - 1; i >= 0; i--) {

		if (val(str[i]) >= base) {
			printf("Invalid Number");
			return -1;
		}

		num += val(str[i]) * power;
		power = power * base;
	}

	return num;
}
char Number::reVal(int num)
{
	if (num >= 0 && num <= 9)
		return (char)(num + '0');
	else
		return (char)(num - 10 + 'A');
}
void Number::strev(char* str)
{
	int len = strlen(str);
	int i;
	for (i = 0; i < len / 2; i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}
const char* Number::fromDeci(char res[], int base, int inputNum)
{
	int index = 0;  // Initialize index of result 

	// Convert input number is given base by repeatedly 
	// dividing it by base and taking remainder 
	while (inputNum > 0)
	{
		res[index++] = reVal(inputNum % base);
		inputNum /= base;
	}
	res[index] = '\0';

	// Reverse the result 
	strev(res);

	return res;
}

int Number::GetDigitsCount() {
	int nr = 0;
	for (int i = 0; i < strlen(this->numValue); i++)
		nr++;
	return nr;
}

void Number::Print() {
	cout << this->numValue << endl;	
}

int Number::GetBase() {
	return this->numBase;	
}