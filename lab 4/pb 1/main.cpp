#pragma warning(disable : 4996)
#include "Sort.h"
#include <string>
#include <iostream>

using namespace std;



int main()
{	
	//1
	/*Sort* v = new Sort(4, 2, 10);
	cout << v->GetElementsCount()<<endl;
	v->Print();
	*/

	//3
	/*int w[100] = {1,2,3,4,5,6};
	Sort* v = new Sort(5, w);
	cout << v->GetElementsCount() << endl;
	v->Print();*/

	//4
	//Sort* v = new Sort(6, 4, 2, 1, 3, 5, 9);
	//cout << v->GetElementsCount() << endl;
	//v->Print();
	//cout << endl;
	
	//5
	Sort* v = new Sort("22,123,4,5,776");
	cout << v->GetElementsCount() << endl;
	v->Print();	

	//v->InsertSort();
	//v->BubbleSort();
	
	
	cout << endl;
	v->Print();
	//cout << endl;
	//cout << v->GetElementFromIndex(2) << endl;	

	
	
	


	return 0;
}
