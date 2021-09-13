#pragma once
#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    Weapon *weapon;
    std::string name;
public:
    HumanB();
    HumanB(std::string name);
    ~HumanB();
    void attack();
    void setWeapon(Weapon& weapon);
};

#endif
