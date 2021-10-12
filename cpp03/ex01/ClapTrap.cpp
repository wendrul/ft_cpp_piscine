#include "ClapTrap.hpp"

const std::string ClapTrap::defaultName = "clappy"; 

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    hitPoints = defaultHitPoints;
    energyPoints = defaultEnergyPoints;
    attackDamage = defaultAttackDamage;
}
ClapTrap::ClapTrap()
{
    this->name = defaultName;
    hitPoints = defaultHitPoints;
    energyPoints = defaultEnergyPoints;
    attackDamage = defaultAttackDamage;
}
ClapTrap::ClapTrap(const ClapTrap &that)
{
    this->name = that.name;
    this->hitPoints = that.hitPoints;
    this->energyPoints = that.energyPoints;
    this->attackDamage = that.attackDamage;
}

ClapTrap::~ClapTrap()
{
}

ClapTrap &ClapTrap::operator=(const ClapTrap &that)
{
    this->name = that.name;
    this->hitPoints = that.hitPoints;
    this->energyPoints = that.energyPoints;
    this->attackDamage = that.attackDamage;
    return *this;
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
