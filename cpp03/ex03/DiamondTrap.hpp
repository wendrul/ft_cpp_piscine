#pragma once
#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    const static std::string defaultName;
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap const &src);
    ~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &other);
    
    using FragTrap::hitPoints;
    using ScavTrap::energyPoints;
    using FragTrap::attackDamage;
    void attack(std::string const &target) const;
    void whoAmI() const;
};

#endif
