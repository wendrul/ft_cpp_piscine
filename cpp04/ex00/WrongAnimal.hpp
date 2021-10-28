#pragma once
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
private:
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    ~WrongAnimal();
    void makeSound() const;
    std::string getType() const;
    WrongAnimal &operator=(const WrongAnimal &src);
};

#endif
