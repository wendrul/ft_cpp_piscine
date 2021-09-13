#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->weapon = nullptr;
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (!weapon)
    {
        std::cout << name << "Tried to attack... but he had no weapon" << std::endl;
    }
    else
    {
        std::cout << name << " attacks with his " << weapon->getType() << std::endl;
    }
}
