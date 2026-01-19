#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &Weap) : _name(name), _weapon(Weap)
{
}

HumanA::~HumanA()
{
}
void HumanA::attack()
{
    std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}

//Completer le constructeur
