#include "Zombie.hpp"

int main()
{
    Zombie *Z;
    randomChump("Foo");
    Z = newZombie("Fee");
    Z->announce();
    delete Z;
    return 0;
}