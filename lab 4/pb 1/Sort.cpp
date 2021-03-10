#pragma warning(disable : 4996)
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdarg.h>
#include "Sort.h"
using namespace std;

Sort::Sort(int number, int mini, int maxi) :capacity(number) {
	arr = new int[capacity];

	srand(time(0));
	for (int i = 0; i < capacity; i++) {
		arr[i] = mini + (rand() % (maxi - mini + 1)); // incarc vectorul	
	}
}

Sort::Sort(int size, int v[100]) {
	arr = new int[capacity];
	this->capacity = size;
	this->arr = v;
}

Sort::Sort(int count, ...) {
	this->capacity = count;
	arr = new int[capacity];

	va_list ap;
	int i = 0;

	va_start(ap, count);
	while (i < count) {
		arr[i] = va_arg(ap, int);
		i++;
	}
	va_end(ap);
}

//numara cate nr sunt in const char* de la CTOR 5
int nrElem(const char* s) {
	int nr = 0;
	char str[256], * p;
	strcpy(str, s);
	p = strtok(str, ",");
	while (p) {
		nr++;
		p = strtok(NULL, ",");
	}
	return nr;
}

Sort::Sort(const char* s) {
	this->capacity = nrElem(s);
	arr = new int[capacity];		

	int i = 0, myInt;
	char* p;
	char str[256];
	strcpy(str, s);

	p = strtok(str, ",");
	while (p) {
		myInt = stoi(p);
		arr[i] = myInt;
		
		p = strtok(NULL, ",");
		i++;
	}	
}



void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void Sort::BubbleSort(bool ascendent)
{
	int i, j;
	for (i = 0; i < capacity - 1; i++)
		
		for (j = 0; j < capacity - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}

void Sort::InsertSort(bool ascendent) {
		int i, key, j;
		for (i = 1; i < capacity; i++)
		{
			key = arr[i];
			j = i - 1;

			while (j >= 0 && arr[j] > key)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}
			arr[j + 1] = key;
		}
}

void Sort::Print() {
	for (int i = 0; i < this->capacity; i++)
		cout << arr[i] << " ";
}

int Sort::GetElementsCount() {
	return this->capacity;
}

int Sort::GetElementFromIndex(int index) {
	return arr[index];
}

