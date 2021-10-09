#pragma once

#include <iostream>
#include <fstream>

using namespace std;

class SaveFile
{
private:
	const string _path = "weapon.txt";
	

public:
	void SaveWeaponToFile(string data, bool isClean);
};