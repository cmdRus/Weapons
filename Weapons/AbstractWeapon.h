#include <string>

using namespace std;

#pragma once
class AbstractWeapon
{
private:
	string CarabineName, Manufacturer;
	string Name;
	unsigned int Article;
	bool IsAuto;
	bool isGood = false;
	Carabine carabine;

public:
	bool SetName(string name)
	{
		if (name == "Mosin" || name == "Rods")
		{
			Name = name;
			return true;
		}
		else
		{
			cout << "��� ������� � �������, ���������� ��� ���" << endl;
			return false;
		}
	};
	string GetName()
	{
		return Name;
	};
	bool SetArticle(unsigned int article)
	{
		if (article == 201)
		{
			Article = article;
			return true;
		}
		else
		{
			cout << "������� ������ � �������, ���������� ��� ���" << endl;
			return false;
		}
	};
	unsigned int GetArticle()
	{
		return Article;
	};
	bool SetIsAuto(bool isAuto)
	{
		if (isAuto == 0)
		{
			IsAuto = isAuto;
			return true;
		}
		else
		{
			cout << "������� � �������, ���������� ��� ���" << endl;
			return false;
		}
	};
	bool GetIsAuto()
	{
		return IsAuto;
	};
	bool IsName(bool isName)
	{
		while (!isGood)
		{
			cout << "������� ���:" << endl;
			cin >> CarabineName;
			isGood = carabine.SetName(CarabineName);
		}
		isGood = false;
	}
};


