#include "FragTrap.hpp"

const std::string FragTrap::defaultName = "fragger";

FragTrap::FragTrap() : ClapTrap(defaultName, defaultHitPoints, defaultEnergyPoints, defaultAttackDamage)
{
    this->hitPoints = defaultHitPoints;
    this->energyPoints = defaultEnergyPoints;
    this->attackDamage = defaultAttackDamage;
    std::cout << "Constructing default FragTrap: " << name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, defaultHitPoints, defaultEnergyPoints, defaultAttackDamage)
{
    this->hitPoints = defaultHitPoints;
    this->energyPoints = defaultEnergyPoints;
    this->attackDamage = defaultAttackDamage;
    std::cout << "Constructing FragTrap " << name << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
    std::cout << "Constructing FragTrap " << name << " by copy\n";
}

FragTrap::~FragTrap()
{
    std::cout << "Destructing FragTrap " << this->ClapTrap::name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    this->ClapTrap::operator=(other);
    return *this;
}

void FragTrap::highFivesGuys() const
{
    std::cout << name << " is positively waiting for you to High Five!\n";
}

void FragTrap::attack(std::string const &target) const
{
    std::cout << "FragTrap " << name << " attacks " << target << " causing " << attackDamage << " damage!" << std::endl;
}
