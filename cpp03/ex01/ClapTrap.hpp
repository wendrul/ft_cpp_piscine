#pragma once
#ifndef _CLAPTRAP_H_
#define _CLAPTRAP_H_

#include <iostream>
#include <string>

class ClapTrap
{
protected:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

private:
    const static int defaultHitPoints = 10;
    const static int defaultEnergyPoints = 10;
    const static int defaultAttackDamage = 0;
    const static std::string defaultName;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &src);
    ClapTrap(std::string name, int hitPoints, int energyPoints, int attackDamage);
    virtual ~ClapTrap();
    
    virtual void attack(std::string const &target) const;
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    ClapTrap &operator=(const ClapTrap &other);
};

#endif
