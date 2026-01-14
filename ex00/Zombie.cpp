#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie* Zombie::newZombie( std::string name )
{
    (void)name;
    return this;
}

void Zombie::randomChump( std::string name )
{
    Zombie newZ = new Z;
    this->name = name;
    announce();
}