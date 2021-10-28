#pragma once
#ifndef SCAV_TRAP_H
#define SCAV_TRAP_H
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    const static int defaultHitPoints = 100;
    const static int defaultEnergyPoints = 50;
    const static int defaultAttackDamage = 20;
    const static std::string defaultName;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &src);
    ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &other);

    void guardGate() const;
    void attack(std::string const &target) const;
};

#endif