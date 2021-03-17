#include "Number.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main()
{   
	Number n1("10110010", 2);
	Number n2("734", 8);
	Number n3("FF", 16);
	Number n4("12", 10);
	Number n5("4", 10);

	
	cout << n1.GetBase() << endl;
	n2.SwitchBase(2);
	cout << n4 + n5;




	return 0;
}