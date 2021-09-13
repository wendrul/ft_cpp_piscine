#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weaponOfChoice) : weapon(weaponOfChoice)
{
    this->name = name;
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}