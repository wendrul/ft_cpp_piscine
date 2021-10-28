#pragma once
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
private:
protected:
    std::string type;

public:
    Animal();
    Animal(const Animal &src);
    ~Animal();
    virtual void makeSound() const = 0;
    std::string getType() const;
    Animal &operator=(const Animal &src);
};

#endif
