#include "Animal.hpp"

Animal::Animal() : type("unknown")
{
    std::cout << "Creating Animal\n";
}

Animal::Animal(const Animal &src) : type(src.type)
{
    std::cout << "Creating Animal\n";
}

Animal::~Animal()
{
    std::cout << "Creating Animal\n";
}

Animal &Animal::operator=(const Animal &src)
{
    type = src.type;
    std::cout << "Animal assigned\n";
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "*robot noises*\n";
}

std::string Animal::getType() const
{
    return type;
}