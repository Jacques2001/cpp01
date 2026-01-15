#include "Zombie.hpp"

int main()
{
    Zombie *Z;
    randomChump("Foo");
    Z = newZombie("Fee");
    delete Z;
    return 0;
}