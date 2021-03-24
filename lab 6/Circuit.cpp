#include "Weather.h"
#include "Car.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"
#include "Circuit.h"
#include <iostream>

using namespace std;

int speed[100], n = 0;

// DO GETTERS FOR WEATHER AND LENGTH

void Circuit::SetLength(int value)
{
	len = value;	
}

void Circuit::SetWeather(Weather x)
{
	vremea = x;				
}

void Circuit::AddCar(Car *obj)
{
	arr[numberOfCars] = obj;
	numberOfCars++;
}

Car* Circuit:: getCarAtIndex(int i)
{
	return arr[i];
}

void Circuit::Race(){		
	for (int i = 0; i < numberOfCars; i++) {
		if (arr[i]->Getfuelcap() > arr[i]->Getfuelconsmp()) { // termina cursa
			arr[i]->setFinish(1); // termina cursa
			if (vremea == Weather::Rain) {
				speed[n] = arr[i]->Getavgspeedrain();
			}
			if (vremea == Weather::Snow) {
				speed[n] = arr[i]->Getavgspeedsnow();
			}
			if (vremea == Weather::Sunny) {
				speed[n] = arr[i]->Getavgspeedsunny();
			}
		}
		else
			arr[i]->setFinish(0);
		n++;
	}
}

void Circuit::ShowFinalRanks()
{
	//ordonez speed
	//afisez carName : avgspeed	
	//poate mai bag un data member la Car cu finish=0 si cand ordonez arr, tin cont de el

	int aux;
	for (int i = 0; i < n-1; i++)
		for(int j=i+1; j<n; j++)
			if (speed[i] > speed[j]) {
				aux = speed[i];
				speed[i] = speed[j];
				speed[j] = aux;
			}		

	for (int k = n - 1; k >= 0; k--) { // parcurg speed[]
		for (int i = 0; i < numberOfCars; i++) {
			if (vremea == Weather::Rain) {
				if (arr[i]->Getavgspeedrain() == speed[k])
					cout << arr[i]->getName() << " " << arr[i]->Getavgspeedrain() << endl;
			}
			if (vremea == Weather::Snow) {
				if (arr[i]->Getavgspeedsnow() == speed[k])
					cout << arr[i]->getName() << " " << arr[i]->Getavgspeedsnow() << endl;
			}
			if (vremea == Weather::Sunny) {
				if (arr[i]->Getavgspeedsunny() == speed[k])
					cout << arr[i]->getName() << " " << arr[i]->Getavgspeedsunny() << endl;
			}
		}
	}

}

void Circuit::ShowWhoDidNotFinish()
{
	cout << endl << "Did not finish: \n" << endl;
	for (int i = 0; i < n; i++) {
		if (arr[i]->getFinish() == 0) // nu a terminat cursa
			cout << arr[i]->getName() << endl;
	}	

	
}

