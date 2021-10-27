#include "ClapTrap.hpp"

const std::string ClapTrap::defaultName = "clappy"; 

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Constructing " << name << " claptrap";
    this->name = name;
    hitPoints = defaultHitPoints;
    energyPoints = defaultEnergyPoints;
    attackDamage = defaultAttackDamage;
}
ClapTrap::ClapTrap()
{
    std::cout << "Constructing claptrap by default\n";
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
    std::cout << "Constructing claptrap " << name << std::endl;
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
