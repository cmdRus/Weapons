#include <iostream>
#include <cstdlib>
#include <Windows.h>
#include "Weapon.h"
#include "MainMenu.h"

using namespace std;

int main(int argc, char** argv) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    MainMenu menu;
    int index;
    menu.SwitchMenu(0);
    while (true)
    {
        cin >> index;
        menu.SwitchMenu(index);
    }
    return 0;
}