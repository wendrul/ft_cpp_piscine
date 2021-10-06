#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
    const int amount = 21;
    Zombie* horde = zombieHorde(amount, "sheepZombie");
    for (int i = 0; i < amount; i++)
    {
        horde[i].announce();
    }
    delete [] horde;
    return 0;
}
