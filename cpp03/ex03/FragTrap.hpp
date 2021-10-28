#pragma once
#ifndef FRAG_TRAP_H
#define FRAG_TRAP_H
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    const static int defaultHitPoints = 100;
    const static int defaultEnergyPoints = 100;
    const static int defaultAttackDamage = 30;
    const static std::string defaultName;
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &src);
    ~FragTrap();

    FragTrap &operator=(const FragTrap &other);

    void highFivesGuys(void) const;
    void attack(std::string const &target) const;
};

#endif