#include "Animal.hpp"

Animal::Animal()
{
    this->type = "unknown";
}
Animal::Animal(const Animal &src)
{
    this->type = src.type;
}
Animal::~Animal()
{
}
void Animal::makeSound() const
{
    std::cout << "*robot noises*\n";
}
std::string Animal::getType() const
{
    return type;
}
Animal &Animal::operator=(const Animal &src)
{
    type = src.type;
}