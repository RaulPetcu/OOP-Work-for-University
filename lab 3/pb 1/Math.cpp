#include <iostream>
#include <cstring>
#include <string.h>
#include <stdarg.h>
#include "Math.h"
#pragma warning(disable: 4996)

int Math::Add(int a, int b) {
	return a + b;
}

int Math::Add(int a, int b, int c) {
	return a + b + c;
}

int Math::Add(double a, double b) {
	return int(a + b);
}

int Math::Add(double a, double b, double c) {
	return int(a + b + c);
}

int Math::Mul(int a, int b) {
	return a * b;
}

int Math::Mul(int a, int b, int c) {
	return a * b * c;
}

int Math::Mul(double a, double b) {
	return int(a * b);
}

int Math::Mul(double a, double b, double c) {
	return int(a * b * c);
}

int Math::Add(int count, ...) {
	int sum = 0;
	va_list ap;
	int i = 0;

	va_start(ap, count);
	while (i < count) {
		sum += va_arg(ap, int);
		i++;
	}
	va_end(ap);
	return sum;
}

//char* Math::Add(const char* s, const char* t) {
//	if (s == nullptr or t == nullptr)
//		return nullptr;
//
//	int lung_s = strlen(s), lung_t = strlen(t);
//
//	char* ptr = (char*)malloc((lung_s + lung_t) * sizeof(char));
//	return ptr;
//}

char* Math::Add(const char* s, const char* t)
{
		if (s == nullptr or t == nullptr)
			return nullptr;

		
		char* res = new char(strlen(s)+strlen(t));
		memset(res, 0, strlen(s) + strlen(t));
		strcpy(res, s);
		strcat(res, t);
		

		return res;
}
