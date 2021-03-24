#include "Mazda.h"
#include "Car.h"
Mazda::Mazda()
{
	Setname("Mazda");
	Setfuelconsmp(8);
	Setfuelcap(40);
	Setavgspeedrain(70);
	Setavgspeedsnow(40);
	Setavgspeedsunny(120);
}

void Mazda::Set()
{
}
void Mazda::Setname(char const* name)
{
	carName = name;
}
void Mazda::Setfuelcap(int value)
{
	fuelCap = value;
}
int Mazda::Getfuelcap()
{
	return fuelCap;
}
void Mazda::Setfuelconsmp(int value)
{
	fuelConsumption = value;
}
int Mazda::Getfuelconsmp()
{
	return fuelConsumption;

}
void Mazda::Setavgspeedrain(int value)
{
	avgSpeedRain = value;
}
int Mazda::Setavgspeedrain()
{
	return avgSpeedRain;
}
void Mazda::Setavgspeedsnow(int value)
{
	avgSpeedSnow = value;
}
int Mazda::Getavgspeedsnow()
{
	return avgSpeedSnow;
}
void Mazda::Setavgspeedsunny(int value)
{
	avgSpeedSunny = value;
}
int Mazda::Getavgspeedsunny(int value)
{
	return avgSpeedSunny;
}
