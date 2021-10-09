#include <string>
#include "AbstractRifle.h"

using namespace std;

#pragma once
class Carabine : public AbstractRifle
{
private:
	float LensDiameter;
	unsigned int MagazineCapacity;
public:
	bool SetLensDiameter(float lensdiameter)
	{
		if (lensdiameter == 5)
		{
			LensDiameter = lensdiameter;
			return true;
		}
		else 
		{
			cout << "������� ��������� ������ � �������, ���������� ��� ���" << endl;
			return false;
		}
	}
	float GetLensDiameter()
	{
		return LensDiameter;
	}
	bool SetMagazineCapacity(unsigned int magazinecapacity)
	{
		if (magazinecapacity == 30)
		{
			MagazineCapacity = magazinecapacity;
			return true;
		}
		else
		{
			cout << "������� �������� ������� � �������, ���������� ��� ���" << endl;
			return false;
		}
	}
	unsigned int GetMagazineCapacity()
	{
		return MagazineCapacity;
	}
};
