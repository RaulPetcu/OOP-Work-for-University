#include <iostream>
#include <vector>

using namespace std;

// PB 3

class MyVector
{
	int capacity = 256;
	int* arr = new int[capacity]; 
	int size = 0; // nr de elem din vector
	
public:
	bool Add(int newElem) {
		if (size >= capacity)
			return 0;
		else {
			arr[size] = newElem;
			size++;
			return 1;
		}		
	}

	bool Delete(int index) {
		if (index >= 0 && index < size) {
			for (int i = index; i < size; i++)
				arr[i] = arr[i + 1];
			size--;
			return 1;
		}
		else
			return 0;		
	}

	void Iterate(int(*makeDouble)(int y)) {	
		for (int i = 0; i < size; i++)
			arr[i] = makeDouble(arr[i]);
	};

	void Filter(int(*f)(int y)) {
		for (int i = 0; i < size; i++)
			if (f(arr[i]) == 1) {
				Delete(i);
				i--;
			}
	};


	int getSize() { return size; }

	void display() {
		for (int i = 0; i < size; i++)
			cout << arr[i] << " ";
		cout << endl;
	}
};


int main()
{
	// PB 1
	cout << "----------------- PB 1 -----------------" << endl;

	vector<string> arr = { "ana", "are", "oop", "paste", "mouse" };

	auto compare = [](string s1, string s2) {
		if (s1.size() > s2.size())
			return 1;
		if (s1.size() < s2.size())
			return 2;
		else // lungimi egale
		{
			if (s1 > s2)
				return 1;
			else
				return 2;
		}
	};// 1 daca primul e mai mic, 2 altfel		

	for (int i = 0; i < arr.size() - 1; i++)
		for (int j = i + 1; j < arr.size(); j++)
			if (compare(arr[i], arr[j]) == 1)
				swap(arr[i], arr[j]);

	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] << " ";
	
	cout << endl;
	
	// PB 2
	cout << "----------------- PB 2 -----------------" << endl;

	vector<int> v;
	v.push_back(123);
	v.push_back(45);
	v.push_back(675);
	v.push_back(8881);
	v.push_back(324);
	v.push_back(78);
	v.push_back(99779);
	v.push_back(0);
	v.push_back(5565);

	auto maxi = [](vector<int> v) {
		int maxi = v[0];
		for (int i = 0; i < v.size(); i++)
			if (maxi < v[i])
				maxi = v[i];
		return maxi;
	};

	cout << "Maximul din vector este: " << maxi(v) << endl;

	
	// PB 3

	cout << "----------------- PB 3 -----------------" << endl;
	MyVector a;
	a.Add(123);
	a.Add(56);
	a.Add(32);
	a.Add(11);
	a.Add(546);
	a.Add(44);
	a.Add(1111);


	a.display();
	a.Delete(2);
	a.display();

	/*auto f = [a]() mutable {
		for (int i = 0; i < a.getSize(); i++) {

		}
	};*/

	a.Iterate([](int x) mutable {	
		return x * 2;
	});

	a.display();

	cout << "---------" << endl;

	a.Filter([](int x)  {
		if (x > 100)
			return 1;
		return 0;
	});

	a.display();


	return 0;
}

