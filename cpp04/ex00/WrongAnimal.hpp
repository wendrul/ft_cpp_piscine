#pragma once
#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &src);
    virtual ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &src);

    void makeSound() const;
    std::string getType() const;
};

#endif
