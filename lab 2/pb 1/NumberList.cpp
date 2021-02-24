#include "NumberList.h"
#include "iostream"

void NumberList::Init() {
	count = 0;
}

bool NumberList::Add(int x) {
	numbers[count] = x;
	count++;

	if (count > 10) {
		return false;
	}
}

void NumberList::Sort() {
	int aux = 0;
	for (int i = 1; i < count; i++)
		for (int j = i + 1; j <= count; j++)
			if (numbers[i] > numbers[j]) {
				aux = numbers[i];
				numbers[i] = numbers[j];
				numbers[j] = aux;
			}
}

void NumberList::Print() {
	for (int i = 0; i < count; i++)
		printf("%d ", numbers[i]);
}