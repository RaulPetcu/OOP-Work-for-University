#include "Ford.h"
#include "Car.h"
Ford::Ford()
{
	Setname("Ford");
	Setfuelconsmp(7);
	Setfuelcap(6);
	Setavgspeedrain(80);
	Setavgspeedsnow(30);
	Setavgspeedsunny(110);
}

void Ford::Set()
{
}
void Ford::Setname(char const* name)
{
	carName = name;
}
void Ford::Setfuelcap(int value)
{
	fuelCap = value;
}
int Ford::Getfuelcap()
{
	return fuelCap;
}
void Ford::Setfuelconsmp(int value)
{
	fuelConsumption = value;
}
int Ford::Getfuelconsmp()
{
	return fuelConsumption;

}
void Ford::Setavgspeedrain(int value)
{
	avgSpeedRain = value;
}
int Ford::Setavgspeedrain()
{
	return avgSpeedRain;
}
void Ford::Setavgspeedsnow(int value)
{
	avgSpeedSnow = value;
}
int Ford::Getavgspeedsnow()
{
	return avgSpeedSnow;
}
void Ford::Setavgspeedsunny(int value)
{
	avgSpeedSunny = value;
}
int Ford::Getavgspeedsunny(int value)
{
	return avgSpeedSunny;
}