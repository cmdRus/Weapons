#include "Weapon.h"
#include <iostream>
#include <string>

using namespace std;

namespace Weapon {

	Weapon::Weapon(){
		Name = " No name ";
		Article = 0;
		Auto = 0;
	}
    void Weapon::SetName()
    {
        cout << "������� �������� ������:";
        cin >> Name;
    }
    void Weapon::SetArticle()
    {
        cout << "������� �������� ��������:";
        cin >> Article;
    }
    void Weapon::SetAuto()
    {
        cout << "��������������?:";
        cin >> Auto;
    }
    const string Weapon::GetName()
    {
        return Name;
    }
    const unsigned int Weapon::GetArticle()
    {
        return Article;
    }
    const bool Weapon::GetAuto()
    {
        return Auto;
    }
    const string Weapon::PrintName()
    {
        return "�������� ������ - " + Name;
    }
    const unsigned int Weapon::PrintArticle()
    {
        return Article;
    }
    const bool Weapon::PrintAuto()
    {
        return "�������������� - " + Auto;
    }





}