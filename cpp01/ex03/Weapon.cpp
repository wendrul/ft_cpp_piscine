#include "Weapon.hpp"

Weapon::Weapon() : weaponType("fist")
{
}

Weapon::Weapon(std::string weaponType)
{
    this->weaponType = weaponType;
}

Weapon::~Weapon()
{
}

std::string Weapon::getType()
{
    return weaponType;
}

void Weapon::setType(std::string weaponType)
{
    this->weaponType = weaponType;
}
