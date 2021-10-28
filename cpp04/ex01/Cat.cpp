#include "Cat.hpp"

Cat::Cat()
{
    brain = new Brain();
    type = "Cat";
    std::cout << type << " has been constructed\n";
}

Cat::~Cat()
{
    delete brain;
    std::cout << type << " has been destructed\n";
}

Cat::Cat(const Cat &that) : Animal(that)
{
    brain = new Brain();
    std::cout << type << " has been copy constructed\n";
}

Cat &Cat::operator=(const Cat &other)
{
    brain = other.brain;
    Animal::operator=(other);
    std::cout << type << " assigned\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nyan\n";
}
