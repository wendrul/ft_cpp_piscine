#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     const Animal *j = new Dog();
//     const Animal *i = new Cat();
//     delete j; //should not create a leak
//     delete i;
// }

void lol()
{
    Animal *list[100];

    for (size_t i = 0; i < 100; i++)
    {
        if (i % 2 == 0)
            list[i] = new Dog();
        else
            list[i] = new Cat();
    }
    std::cout << "\n\n\n\n\n" << "Destruction of animals:" << "\n\n\n\n\n\n";
    for (size_t i = 0; i < 100; i++)
    {
        delete list[i];
    }
}

int main()
{
    lol();
    // while (1)
    //     ;
    return 0;
}