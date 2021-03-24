#pragma once
class Car
{
protected: // accesibile doar de catre clasele derivate
	const char* carName;
	int fuelCap;
	int fuelConsumption;
	int avgSpeedRain;
	int avgSpeedSnow;
	int avgSpeedSunny;
	int finish = 0;
public:
	virtual void Set() = 0;

	virtual void Setname(char const* name)
	{
		carName = name;
	}
	virtual const char* getName()
	{
		return carName;
	}

	virtual void Setfuelcap(int value)
	{
		fuelCap = value;
	}
	virtual int Getfuelcap()
	{
		return fuelCap;
	}

	virtual void Setfuelconsmp(int value)
	{
		fuelConsumption = value;
	}
	virtual int Getfuelconsmp()
	{
		return fuelConsumption;

	}

	virtual void Setavgspeedrain(int value)
	{
		avgSpeedRain = value;
	}
	virtual int Getavgspeedrain()
	{
		return avgSpeedRain;
	}

	virtual void Setavgspeedsnow(int value)
	{
		avgSpeedSnow = value;
	}
	virtual int Getavgspeedsnow()
	{
		return avgSpeedSnow;
	}

	virtual void Setavgspeedsunny(int value)
	{
		avgSpeedSunny = value;
	}
	virtual int Getavgspeedsunny()
	{
		return avgSpeedSunny;
	}

	virtual void setFinish(int x) {
		finish = x;
	}
	virtual int getFinish() {
		return finish;
	}
};
