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
        cout << "Введите название оружия:";
        cin >> Name;
    }
    void Weapon::SetArticle()
    {
        cout << "Введите название артикула:";
        cin >> Article;
    }
    void Weapon::SetAuto()
    {
        cout << "Автоматическое?:";
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
        return "Название оружия - " + Name;
    }
    const unsigned int Weapon::PrintArticle()
    {
        return Article;
    }
    const bool Weapon::PrintAuto()
    {
        return "Автоматическое - " + Auto;
    }





}