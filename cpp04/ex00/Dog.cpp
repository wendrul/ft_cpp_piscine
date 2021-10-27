#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << type << " has been constructed\n";
}

Dog::~Dog()
{
    std::cout << type << " has been destructed\n";
}

Dog::Dog(const Dog &that) : Animal(that)
{
    std::cout << type << " has been copy constructed\n";
}

Dog& Dog::operator=(const Dog&)
{
    std::cout << type << " assigned\n";
}

void Dog::makeSound() const
{
    std::cout << "woof\n";
}
