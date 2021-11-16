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
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;
    Animal &operator=(const Animal &src);
};

#endif
