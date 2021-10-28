#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Creating Animal\n";
    this->type = "unknown";
}
Animal::Animal(const Animal &src)
{
    std::cout << "Creating Animal\n";
    this->type = src.type;
}
Animal::~Animal()
{
    std::cout << "Creating Animal\n";
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
    return *this;
}