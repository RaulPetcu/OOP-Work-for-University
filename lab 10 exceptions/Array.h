#include <iostream>
using namespace std;
#pragma once

class Compare
{
public:
	virtual int CompareElements(void* e1,void* e2) = 0;
};

//template<class T>
//class C :public Compare {
//
//public:
//	int CompareElements(void* e1, void* e2) {
//		if (e1 == e2)
//			return true;
//		return false;
//	}
//};

template<class T>
class ArrayIterator
{
private:
	int Current; // mai adaugati si alte date si functii necesare pentru iterator
	int* p;
public:
	ArrayIterator() {

	}

	ArrayIterator& operator ++ () {
		p++;
		return *this;
	}

	ArrayIterator& operator -- () {
		p--;
		return *this;
	}

	bool operator= (ArrayIterator<T>&) {

	}

	bool operator!=(ArrayIterator<T>&) {

	}

	T* GetElement() {

	}
};

template<class T>
class Array
{
private:

	T** List; // lista cu pointeri la obiecte de tipul T*

	int Capacity; // dimensiunea listei de pointeri

	int Size; // cate elemente sunt in lista

public:

	Array() {
		Capacity = 0;
		Size = 0;
	}// Lista nu e alocata, Capacity si Size = 0

	~Array() {
		for (int i = 0; i < Size; i++) {
			delete[] List[i];
		}
	}// destructor

	Array(int capacity) {
		Capacity = capacity;
		Size = 0;
		List = new T * [Capacity];
		for (int i = 0; i < Capacity; i++) {
			List[i] = new T;
		}
	}// Lista e alocata cu 'capacity' elemente

	T& operator[] (int index) {
		if (index >= 0 && index < Size) {
			return *List[index];
		}
		else
			throw 1;
	}

	const Array<T>& operator+=(const T& newElem) {
		*List[Size++] = newElem;
		return *this;
	}

	const Array<T>& Insert(int index, const T& newElem) {
			if (index > Size || index < 0)
				throw 1;

			for (int i = Size - 1; i > index; i--)
				*List[i] = *List[i - 1];
			*List[index] = newElem;
			Size++;
	}

	const Array<T>& Insert(int index, const Array<T> otherArray) {
		if (index < 0 || index >= Size)
			throw 1;

		int aux = otherArray.Size;
		while (aux) {
			for (int i = Size; i > index; i--)
				*List[i] = *List[i - 1];
			Size++;
			aux--;
		}
		int j=0;
		for (int i = index + 1; i <= otherArray.Size + index; i++) {
			*List[i] = *otherArray.List[j];
			j++;
		}
		return *this;
	}

	Array(const Array<T>& otherArray) {
		Capacity = otherArray.Capacity;
		Size = otherArray.Size;
		List = new T * [Capacity];
		for (int i = 0; i < Size; i++)
			List[i] = new T(*otherArray.List[i]);
	}

	const Array<T>& Delete(int index) {
		if (index > Size || index < 0)
			throw 1;

		for (int i = index; i < Size; i++)
			*List[i] = *List[i + 1];
		Size--;
		return *this;
	}
	
	bool operator=(const Array<T>& otherArray) {
		if (otherArray.Size != Size || otherArray.Capacity != Capacity)
			throw 'x';

		Size = otherArray.Size;
		Capacity = otherArray.Capacity;
		for (int i = 0; i < otherArray.Size; i++)
			*List[i] = *otherArray.List[i];
	}

	void Sort() {
		for (int i = 0; i < Size - 1; i++)
			for (int j = i + 1; j < Size; j++)
				if (*List[i] > *List[j])
					swap(*List[i], *List[j]);
	}

	static int compare(const T& a, const T& b) {
		if (a > b)
			return true;
		else
			return false;
	}
	static int compare2(const T& a, const T& b) {
		if (a == b)
			return true;
		else
			return false;
	}

	void Sort( int(*compare)(const T&, const T&) ) {
		for (int i = 0; i < Size - 1; i++)
			for (int j = i + 1; j < Size; j++)
				//if (*List[i] > *List[j])
				if(compare(*List[i], *List[j]))
					swap(*List[i], *List[j]);
	}

	void Sort(Compare* comparator) {
		for (int i = 0; i < Size - 1; i++)
			for (int j = i + 1; j < Size; j++)
				if (comparator->CompareElements(*List[i], *List[j]))
					swap(*List[i], *List[j]);
	}

	//BS
	int BS(const Array<T>& otherArray, int l, int r, int x)
	{
		if (r >= l) {
			int mid = l + (r - l) / 2;
			if (*otherArray.List[mid] == x)
				return mid;
			if (*otherArray.List[mid] > x)
				return BS(otherArray, l, mid - 1, x);
			return BS(otherArray, mid + 1, r, x);
		}
		return -1;
	}

	int BinarySearch(const T& elem) {
		Array<T> arrCopy(*this);	

		arrCopy.displayArray();
		arrCopy.Sort();				

		return BS(arrCopy, 0, Size - 1, elem);
	}
	
	int BinarySearch(const T& elem, int(*compare)(const T&, const T&)) {

	}

	int BinarySearch(const T& elem, Compare* comparator) {

	}

	int Find(const T& elem) {
		for (int i = 0; i < Size; i++)
			if (*List[i] == elem)
				return i;
		return -1;
	}

	int Find(const T& elem, int(*compare2)(const T&, const T&)) {
		for (int i = 0; i < Size; i++)
			if (compare2(*List[i], elem) == true)
				return i;
		return -1;
	}

	int Find(const T& elem, Compare* comparator) {
		for (int i = 0; i < Size; i++)
			if (comparator->CompareElements(*List[i], elem))
				return i;
		return -1;
	}

	void displayArray() {
		for (int i = 0; i < Size; i++)
			cout << *List[i] << " ";
		cout << endl;
	}

	int getSize() {
		return Size;
	}

};