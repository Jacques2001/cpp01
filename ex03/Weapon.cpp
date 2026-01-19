#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
    _type = name;
}

Weapon::~Weapon()
{
}

std::string &Weapon::getType()
{
    return _type;
}

void Weapon::setType(std::string value)
{
    _type = value;
}
