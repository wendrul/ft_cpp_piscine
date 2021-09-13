#pragma once
#ifndef __WEAPON_HPP__
#define __WEAPON_HPP__

#include <iostream>

class Weapon
{
private:
    std::string weaponType;
public:
    Weapon();
    Weapon(std::string type);
    ~Weapon();
    std::string getType();
    void setType(std::string type);
};

#endif
