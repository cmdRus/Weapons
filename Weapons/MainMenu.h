#define NEW_LINE "\n"

#include <iostream>
#include "Carabine.h"
#include "Container.h"


#pragma once
class MainMenu
{
public: 
	void ViewMainMenu();
	void ViewAddWeaponMenu();
	void SwitchMenu(int index);
	void ViewListWeaponMenu();
	void ViewSaveFileMenu();
private: 
	Container <Carabine> _carabins;
};


