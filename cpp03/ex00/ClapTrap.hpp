#pragma once
#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>

class ClapTrap
{
private:
    std::string name;
    const static int defaultHitPoints = 10;
    const static int defaultEnergyPoints = 10;
    const static int defaultAttackDamage = 0;
    int hitPoints;
    int energyPoints;
    int attackDamage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    void attack(std::string const & target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};




#endif