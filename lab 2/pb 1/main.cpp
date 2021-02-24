#include <iostream>
#include "NumberList.h"
using namespace std;


int main()
{
	NumberList test;
	test.Init();	
	
	test.Add(4);
	test.Add(1);
	test.Add(3);
	test.Add(6);
	test.Add(9);

	test.Print();

	test.Sort();

	test.Print();

	return 0;
}

