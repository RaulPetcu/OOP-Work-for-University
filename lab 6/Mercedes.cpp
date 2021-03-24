#include "Mercedes.h"
#include "Car.h"
Mercedes::Mercedes()
{
	Setname("Mercedes");
	Setfuelconsmp(15);
	Setfuelcap(13);
	Setavgspeedrain(90);
	Setavgspeedsnow(70);
	Setavgspeedsunny(140);
}

void Mercedes::Set()
{
}
void Mercedes::Setname(char const* name)
{
	carName = name;
}
void Mercedes::Setfuelcap(int value)
{
	fuelCap = value;
}
int Mercedes::Getfuelcap()
{
	return fuelCap;
}
void Mercedes::Setfuelconsmp(int value)
{
	fuelConsumption = value;
}
int Mercedes::Getfuelconsmp()
{
	return fuelConsumption;

}
void Mercedes::Setavgspeedrain(int value)
{
	avgSpeedRain = value;
}
int Mercedes::Setavgspeedrain()
{
	return avgSpeedRain;
}
void Mercedes::Setavgspeedsnow(int value)
{
	avgSpeedSnow = value;
}
int Mercedes::Getavgspeedsnow()
{
	return avgSpeedSnow;
}
void Mercedes::Setavgspeedsunny(int value)
{
	avgSpeedSunny = value;
}
int Mercedes::Getavgspeedsunny(int value)
{
	return avgSpeedSunny;
}