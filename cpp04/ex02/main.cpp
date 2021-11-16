#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal *dog = new Dog();
    const Animal *cat = new Cat();
    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    dog->makeSound();
    
    // Animal *animal = new Animal();
    // animal->makeSound();
    // delete animal;
    delete cat;
    delete dog;
    return 0;
}