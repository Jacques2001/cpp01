#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie
{
    private :
        std::string _name;
    public :
        Zombie();
        ~Zombie();
        void announce();
        void setname(std::string name);
};

Zombie* zombieHorde( int N, std::string name );

#endif