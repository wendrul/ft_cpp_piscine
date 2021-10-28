#include "DiamondTrap.hpp"

const std::string DiamondTrap::defaultName = "diamondo";

DiamondTrap::DiamondTrap() : ClapTrap(defaultName + "_clap_name"), ScavTrap(defaultName), FragTrap(defaultName), name(defaultName)
{
    std::cout << "Constructing DiamondTrap " << name << " by default\n";
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name(name)
{
    std::cout << "Constructing DiamondTrap " << name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) : ClapTrap(src), name(src.name)
{
    std::cout << "Constructing DiamondTrap " << name << " by copy\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Destructing DiamondTrap " << name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    ClapTrap::operator=(other);
    return *this;
}

void DiamondTrap::attack(std::string const &target) const
{
    return ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() const
{
    std::cout << "My name is " << name << " but my clap name is " << ClapTrap::name << ". who am i really?\n";
}
