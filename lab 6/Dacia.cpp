#include "Dacia.h"
#include "Car.h"

Dacia::Dacia()
{
	Setname("Dacia");
	Setfuelconsmp(4);
	Setfuelcap(35);
	Setavgspeedrain(60);
	Setavgspeedsnow(30);
	Setavgspeedsunny(90);
}

void Dacia::Set()
{

}
void Dacia::Setname(const char* name)
{
	carName = name;
}
void Dacia::Setfuelcap(int value)
{
	fuelCap = value;
}
int Dacia::Getfuelcap()
{
	return fuelCap;
}
void Dacia::Setfuelconsmp(int value)
{
	fuelConsumption = value;
}
int Dacia::Getfuelconsmp()
{
	return fuelConsumption;

}
void Dacia::Setavgspeedrain(int value)
{
	avgSpeedRain = value;
}
int Dacia::Setavgspeedrain()
{
	return avgSpeedRain;
}
void Dacia::Setavgspeedsnow(int value)
{
	avgSpeedSnow = value;
}
int Dacia::Getavgspeedsnow()
{
	return avgSpeedSnow;
}
void Dacia::Setavgspeedsunny(int value)
{
	avgSpeedSunny = value;
}
int Dacia::Getavgspeedsunny(int value)
{
	return avgSpeedSunny;
}
