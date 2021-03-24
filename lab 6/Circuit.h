#pragma once
#include "Weather.h"
class Circuit
{
	int len;
	int numberOfCars = 0;
	Weather vremea;
	Car* arr[100];

public:
	void SetLength(int value);
	void SetWeather(Weather x);
	void AddCar(Car *obj);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

	Car* getCarAtIndex(int i);	
	//Weather getWeather();
};	