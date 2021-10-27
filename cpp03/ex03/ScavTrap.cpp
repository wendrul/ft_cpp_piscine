#include "ScavTrap.hpp"

const std::string ScavTrap::defaultName = "scavy";

ScavTrap::ScavTrap() : ClapTrap(defaultName, defaultHitPoints, defaultEnergyPoints, defaultAttackDamage)
{
    std::cout << "Constructing default ScavTrap: " << name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, defaultHitPoints, defaultEnergyPoints, defaultAttackDamage)
{
    std::cout << "Constructing ScavTrap " << name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
    std::cout << "Constructing ScavTrap " << name << " by copy\n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructing ScavTrap " << this->ClapTrap::name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    this->ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::guardGate() const
{
    std::cout << name << " is now guarding the Gate!\n";
}

void ScavTrap::attack(std::string const &target) const
{
    std::cout << "ScavTrap " << name << " attacks " << target << " causing " << attackDamage << " damage!" << std::endl;
}
