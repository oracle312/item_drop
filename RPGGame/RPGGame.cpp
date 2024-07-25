﻿#include <iostream>
#include "item.h"

using namespace std;

Item* DropItem()
{
    if (rand() % 2 == 0)
    {
        Weapon* weapon = new Weapon();
        return weapon;
    }
    else
    {
        Armor* armor = new Armor();
        return armor;
    }
}

int main()
{
    srand((unsigned)time(0));

    for (auto i = 0; i < 100; i++)
    {
        Item* item = DropItem();
        item->PrintInfo();
    }
    
    cout << "Hello World!\n";
}

