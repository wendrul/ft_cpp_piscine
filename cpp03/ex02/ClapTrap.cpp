#include "ClapTrap.hpp"

const std::string ClapTrap::defaultName = "clappy";

ClapTrap::ClapTrap(std::string name) : name(name),
                                       hitPoints(defaultHitPoints),
                                       energyPoints(defaultEnergyPoints),
                                       attackDamage(defaultAttackDamage)
{
    std::cout << "Constructing ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitPoints,
                   int energyPoints, int attackDamage) : name(name),
                                                         hitPoints(hitPoints),
                                                         energyPoints(energyPoints),
                                                         attackDamage(attackDamage)
{
    std::cout << "Constructing ClapTrap " << name << std::endl;
}

ClapTrap::ClapTrap() : name(defaultName),
                       hitPoints(defaultHitPoints),
                       energyPoints(defaultEnergyPoints),
                       attackDamage(defaultAttackDamage)
{
    std::cout << "Constructing ClapTrap by default: " << name << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap &that) : name(that.name),
                                           hitPoints(that.hitPoints),
                                           energyPoints(that.energyPoints),
                                           attackDamage(that.attackDamage)
{
    std::cout << "Constructing ClapTrap " << name << " by copy\n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructing ClapTrap " << name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &that)
{
    this->name = that.name;
    this->hitPoints = that.hitPoints;
    this->energyPoints = that.energyPoints;
    this->attackDamage = that.attackDamage;
    return *this;
}

void ClapTrap::attack(std::string const &target) const
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
