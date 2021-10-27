#pragma once
#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>

class ClapTrap
{
private:
    const static int defaultHitPoints = 10;
    const static int defaultEnergyPoints = 10;
    const static int defaultAttackDamage = 0;
    const static std::string defaultName;
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ~ClapTrap();
    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap &operator=(const ClapTrap &other);
};

#endif
