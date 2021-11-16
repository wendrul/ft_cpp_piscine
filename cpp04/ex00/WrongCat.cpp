#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    type = "Cat";
    std::cout << type << " has been constructed\n";
}

WrongCat::~WrongCat()
{
    std::cout << type << " has been destructed\n";
}

WrongCat::WrongCat(const WrongCat &that) : WrongAnimal(that)
{
    std::cout << type << " has been copy constructed\n";
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    WrongAnimal::operator=(other);
    std::cout << type << " assigned\n";
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "nyan\n";
}
