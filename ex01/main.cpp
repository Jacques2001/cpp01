#include "Zombie.hpp"

int main()
{
    Zombie *Z;
    int N = 10;
    int i = 0;

    Z = zombieHorde(N, "Foo");
    for (i = 0; i < N; i++)
        Z[i].announce();
    delete[] Z;
    return 0;
}