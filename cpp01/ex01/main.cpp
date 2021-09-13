#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

#define AMOUNT 21

int main()
{
    Zombie* horde = zombieHorde(AMOUNT, "sheepZombie");
    for (int i = 0; i < AMOUNT; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}
