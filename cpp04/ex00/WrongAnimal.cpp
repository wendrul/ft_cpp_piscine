#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("unknown")
{
    std::cout << "Creating WrongAnimal\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) : type(src.type)
{
    std::cout << "Creating WrongAnimal\n";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Creating WrongAnimal\n";
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    type = src.type;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "*robot noises*\n";
}

std::string WrongAnimal::getType() const
{
    return type;
}
