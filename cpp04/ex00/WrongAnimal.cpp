#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Creating WrongAnimal\n";
    this->type = "unknown";
}
WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
    std::cout << "Creating WrongAnimal\n";
    this->type = src.type;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Creating WrongAnimal\n";
}
void WrongAnimal::makeSound() const
{
    std::cout << "*robot noises*\n";
}
std::string WrongAnimal::getType() const
{
    return type;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &src)
{
    type = src.type;
    return *this;
}