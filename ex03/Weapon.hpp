#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string _type;
    public:
        Weapon(std::string name);
        ~Weapon();
        std::string &getType();
        void setType(std::string value);
};

#endif
