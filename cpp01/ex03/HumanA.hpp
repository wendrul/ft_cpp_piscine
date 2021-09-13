#pragma once
#ifndef __HUMANA_HPP__
#define __HUMANA_HPP__

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA();
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
    void attack();
    void setWeapon(Weapon weaponOfChoice);
};

#endif
