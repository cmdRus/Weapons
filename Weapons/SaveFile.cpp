#include "SaveFile.h"

using namespace std;

void SaveFile::SaveWeaponToFile(string data, bool isClean)
{
	ofstream out; // ����� ��� ������
	if (isClean)
	{
		out.open(_path/*, ios::app*/); // �������� ���� ��� ������
		if (out.is_open())
		{
			out << data << endl;
		}
	}
	else
	{
		out.open(_path, ios::app); // �������� ���� ��� ������
		if (out.is_open())
		{
			out << data << endl;
		}
	}
	
}
