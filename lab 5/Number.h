#pragma once
class Number{

	// add data members
	const char* numValue;
	int numBase;

public:
	//	CONSTRUCTOR
	Number(const char* value, int base); // where base is between 2 and 16

	//DESTRUCTOR
	~Number();

	//CTOR
	Number(const Number& d);
	//DTOR
	Number(Number&& d);

	//OPERATORS
	int customConvert(const char* str);
	int operator+(Number& n);
	Number& operator=(int val);
	int operator-(Number& n);
	int operator>(const Number& n);
	int operator<(const Number& n);
	int operator<=(const Number& n);
	int operator>=(const Number& n);
	int operator==(const Number& n);
	bool operator--(int val);
	Number& operator--();



	void SwitchBase(int newBase);
	int val(char c);	
	char reVal(int num);
	void strev(char* str);
	const char* fromDeci(char res[], int base, int inputNum);
	int toDeci(const char* str, int base);

	void Print();

	int  GetDigitsCount(); // returns the number of digits for the current number

	int  GetBase(); // returns the current base

};