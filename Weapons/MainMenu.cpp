#include "MainMenu.h"

#include "SaveFile.h"


using namespace std;

void MainMenu::ViewMainMenu()
{
	
	cout << "Добавить оружие" << endl;
	cout << "Посмотреть оружие" << endl;
	cout << "Сохранить в файл" << endl;
}

void MainMenu::ViewAddWeaponMenu()
{
	system("cls");
	string CarabineName, Manufacturer;
	unsigned int Article, MagazineCapacity;
	bool Auto;
	float BarrelLenght, LensDiameter;
	bool isGood = false;
	Carabine carabine;

	while (!isGood)
	{
		cout << "Введите Имя:" << endl;
		cin >> CarabineName;
		isGood = carabine.SetName(CarabineName);
	}
	isGood = false;

	while (!isGood)
	{
		cout << "Введите Артикул:" << endl;
		cin >> Article;
		isGood = carabine.SetArticle(Article);
	}
	isGood = false;

	while (!isGood)
	{
		cout << "Укажите тип (Автоматическое или нет):" << endl;
		cin >> Auto;
		isGood = carabine.SetIsAuto(Auto);
	}
	isGood = false;

	while (!isGood)
	{
		cout << "Введите производителя:" << endl;
		cin >> Manufacturer;
		isGood = carabine.SetManufacturer(Manufacturer);
	}
	isGood = false;

	while (!isGood)
	{
		cout << "Введите длину ствола:" << endl;
		cin >> BarrelLenght;
		isGood = carabine.SetBarrelLenght(BarrelLenght);
	}
	isGood = false;
	
	while (!isGood)
	{
		cout << "Введите диаметр объектива:" << endl;
		cin >> LensDiameter;
		isGood = carabine.SetLensDiameter(LensDiameter);
	}
	isGood = false;

	while (!isGood)
	{
		cout << "Введите емкость магазина:" << endl;
		cin >> MagazineCapacity;
		isGood = carabine.SetMagazineCapacity(MagazineCapacity);
	}
	isGood = false;
	
	_carabins.add(carabine);

	ViewMainMenu();
}

void MainMenu::SwitchMenu(int index)
{
	switch (index)
	{
	case 0:
		ViewMainMenu();
		break;
	case 1:
		ViewAddWeaponMenu();
		break;
	case 2:
		ViewListWeaponMenu();
		break;
	case 3:
		ViewSaveFileMenu();
		break;
	default:
		break;
	}
}

void MainMenu::ViewListWeaponMenu()
{
	system("cls");
	if (_carabins.getSize() > 0)
	{
		for (int i = 0; i < _carabins.getSize(); i++)
		{
			cout << _carabins[i].GetName() << " " << _carabins[i].GetArticle() << endl;
		}
	}
	else
	{
		cout << "Оружие не найдено" << endl;
	}
	
	ViewMainMenu();
}

void MainMenu::ViewSaveFileMenu()
{
	SaveFile savefile;
	bool isClean = true;
	for (int i = 0; i < _carabins.getSize(); i++)
	{
		savefile.SaveWeaponToFile(
			"Название: " + _carabins[i].GetName() + NEW_LINE +
			"Артикул: " + to_string(_carabins[i].GetArticle()) + NEW_LINE +
			"Автоматическое?: " + to_string(_carabins[i].GetIsAuto()) + NEW_LINE +
			"Производитель:  " + _carabins[i].GetManufacturer() + NEW_LINE +
			"Длина ствола: " + to_string(_carabins[i].GetBarrelLenght()) + NEW_LINE +
			"Диаметр объектива: " + to_string(_carabins[i].GetLensDiameter()) + NEW_LINE +
			"Емкость магазина: " + to_string(_carabins[i].GetMagazineCapacity()),
			isClean
		);
		isClean = false;
	}
	
	
	ViewMainMenu();
}

