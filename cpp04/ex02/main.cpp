#include "Cat.hpp"

int main()
{
    Animal *cat = new Cat();

    cat->makeSound();
    // Animal *animal = new Animal();
    // animal->makeSound();
    return 0;
}