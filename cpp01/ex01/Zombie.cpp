#include "Zombie.hpp"

Zombie::Zombie() : name("defaultZombie")
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << "<" << name << "> *destroyed" << std::endl;
}

void Zombie::announce()
{
    std::cout << "<" << name << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
