#include "SaveFile.h"

using namespace std;

void SaveFile::SaveWeaponToFile(string data, bool isClean)
{
	ofstream out; // Поток для записи
	if (isClean)
	{
		out.open(_path/*, ios::app*/); // Окрываем файл для записи
		if (out.is_open())
		{
			out << data << endl;
		}
	}
	else
	{
		out.open(_path, ios::app); // Окрываем файл для записи
		if (out.is_open())
		{
			out << data << endl;
		}
	}
	
}
