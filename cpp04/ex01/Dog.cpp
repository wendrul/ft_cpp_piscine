#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    brain = new Brain();
    std::cout << type << " has been constructed\n";
}

Dog::~Dog()
{
    delete brain;
    std::cout << type << " has been destructed\n";
}

Dog::Dog(const Dog &that) : Animal(that)
{
    brain = new Brain();
    std::cout << type << " has been copy constructed\n";
}

Dog& Dog::operator=(const Dog &other)
{
    brain = other.brain;
    Animal::operator=(other);
    std::cout << type << " assigned\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof\n";
}
