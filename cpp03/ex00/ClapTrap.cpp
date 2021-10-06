#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = defaultHitPoints;
    energyPoints = defaultEnergyPoints;
    attackDamage = defaultAttackDamage;
}

ClapTrap::~ClapTrap()
{
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name << " attacks " << target << " causing " << attackDamage << " damage!" << std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    hitPoints -= amount;
    std::cout << "ClapTrap " << name << " is hit for " << amount << "! Remaining health: " << hitPoints << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
    hitPoints += amount;
    std::cout << "ClapTrap " << name << " is repaired for " << amount << ". Health is now: " << hitPoints << std::endl;
}
