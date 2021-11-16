#include "Dog.hpp"

Dog::Dog()
: Animal()
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

Dog::Dog(const Dog& c)
: Animal(c)
{
    brain = new Brain(*(c.brain));
    std::cout << type << " has been copy constructed\n";
}

Dog& Dog::operator=(const Dog& c)
{
    delete brain;
    brain = new Brain(*(c.brain));
    Animal::operator=(c);
    std::cout << type << " assigned\n";
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "woof\n";
}
