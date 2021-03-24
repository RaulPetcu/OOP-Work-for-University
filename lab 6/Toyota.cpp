#include "Toyota.h"
#include "Car.h"
Toyota::Toyota()
{
	Setname("Toyota");
	Setfuelconsmp(3);
	Setfuelcap(40);
	Setavgspeedrain(60);
	Setavgspeedsnow(50);
	Setavgspeedsunny(100);
}

void Toyota::Set()
{

}
void Toyota::Setname(char const* name)
{
	carName = name;
}
void Toyota::Setfuelcap(int value)
{
	fuelCap = value;
}
int Toyota::Getfuelcap()
{
	return fuelCap;
}
void Toyota::Setfuelconsmp(int value)
{
	fuelConsumption = value;
}
int Toyota::Getfuelconsmp()
{
	return fuelConsumption;

}
void Toyota::Setavgspeedrain(int value)
{
	avgSpeedRain = value;
}
int Toyota::Setavgspeedrain()
{
	return avgSpeedRain;
}
void Toyota::Setavgspeedsnow(int value)
{
	avgSpeedSnow = value;
}
int Toyota::Getavgspeedsnow()
{
	return avgSpeedSnow;
}
void Toyota::Setavgspeedsunny(int value)
{
	avgSpeedSunny = value;
}
int Toyota::Getavgspeedsunny(int value)
{
	return avgSpeedSunny;
}