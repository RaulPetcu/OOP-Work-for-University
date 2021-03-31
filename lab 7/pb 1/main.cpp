#include <iostream>
#include <sstream>
using namespace std;

float operator"" _Kelvin(const char* value) {
	// const char* to double
	stringstream strValue;
	strValue << value;
	double doubleValue;
	strValue >> doubleValue;

	return doubleValue - 273.15;
}

float operator"" _Fahrenheit(const char* value) {
	// const char* to double
	stringstream strValue;
	strValue << value;
	double doubleValue;
	strValue >> doubleValue;

	return float(doubleValue * 9 / 5) + 32;
}

int main()
{
	float a = 300_Kelvin;
		
	float b = 120_Fahrenheit;

	cout << b;

	return 0;
}
