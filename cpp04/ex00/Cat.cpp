#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << type << " has been constructed\n";
}

Cat::~Cat()
{
    std::cout << type << " has been destructed\n";
}

Cat::Cat(const Cat &that) : Animal(that)
{
    std::cout << type << " has been copy constructed\n";
}

Cat &Cat::operator=(const Cat &other)
{
    Animal::operator=(other);
    std::cout << type << " assigned\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nyan\n";
}
