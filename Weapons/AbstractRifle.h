#include <string>
#include "AbstractWeapon.h"

using namespace std;

#pragma once
class AbstractRifle : public AbstractWeapon
{
private:
	string Manufacturer;
	float BarrelLenght;
public:
	bool SetManufacturer(string manufacturer)
	{
		if (manufacturer == "Калашников" || manufacturer == "Мор")
		{
			Manufacturer = manufacturer;
			return true;
		}
		else
		{
			cout << "Производитель введен с ошибкой, попробуйте еще раз" << endl;
			return false;
		}
	};
	string GetManufacturer() 
	{
		return Manufacturer;
	}
	bool SetBarrelLenght(float barrellenght)
	{
		if (barrellenght == 20)
		{
			BarrelLenght = barrellenght;
			return true;
		}
		else
		{
			cout << "Длина ствола введена с ошибкой, попробуйте еще раз" << endl;
			return false;
		}
	}
	float GetBarrelLenght()
	{
		return BarrelLenght;
	}
};