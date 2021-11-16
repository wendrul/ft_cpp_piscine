#include "Cat.hpp"

Cat::Cat()
: Animal()
{
    type = "Cat";
    brain = new Brain();
    std::cout << type << " has been constructed\n";
}

Cat::~Cat()
{
    delete brain;
    std::cout << type << " has been destructed\n";
}

Cat::Cat(const Cat& c)
: Animal(c)
{
    brain = new Brain(*(c.brain));
    std::cout << type << " has been copy constructed\n";
}

Cat& Cat::operator=(const Cat& c)
{
    delete brain;
    brain = new Brain(*(c.brain));
    Animal::operator=(c);
    std::cout << type << " assigned\n";
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "nyan\n";
}
