#include <iostream>
#include <typeinfo>
#include <exception>
#include "Array.h"
using namespace std;

int main()
{
	Array<int> arr(20);
	Array<int> arr2(20);


	try {
		//arr[0] = 5;
		arr += 4;
		arr += 5;
		arr += 123;
		arr += 33;
		arr += 91;
		arr += 4999;
		arr += 1;
		arr += 13;
		arr += 2;

		arr.displayArray();

		Array<int> v(4);
		v += 7;
		v += 7;
		v += 7;
		v += 7;
		arr.Insert(2, v);
		arr.displayArray();

		arr.Delete(1);
		arr.displayArray();

		arr.Sort(arr.compare);
		arr.displayArray();

		cout << arr.Find(33, arr.compare2) << endl;


		cout << "Binary Search : " << endl;
		cout << arr.BinarySearch(13) << endl;

		arr.displayArray();

		/*Compare* comp;
		cout << arr.Find(3, );*/

		// pentru operatorul = 
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;
		arr2 += 1;

		arr = arr2;

		arr.displayArray();
	}
	catch (int x) {
		cout << "Index invalid";
	}
	catch (char c) {
		cout << "La asignare vectorii difera prin Size sau Capacity";
	}


	return 0;
}