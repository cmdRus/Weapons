#ifndef WEAPON_H
#define WEAPON_H
#include <stdio.h>
#include <iostream>
#include <fstream>

using namespace std;

namespace Weapon {

	class Weapon
	{
	public:
		Weapon();
		void SetName();
		void SetArticle();
		void SetAuto();

		const string GetName();
		const unsigned int GetArticle();
		const bool GetAuto();

		const string PrintName();
		const unsigned int PrintArticle();
		const bool PrintAuto();

	private:
		string Name; // �������� ������
		unsigned int Article; // ������� ������
		bool Auto; // ������� ��� ���
	};
}



#endif