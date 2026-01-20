#include "Harl.hpp"

int main()
{
    Harl msg;
    msg.complain("DEBUG");
    msg.complain("INFO");
    msg.complain("WARNING");
    msg.complain("ERROR");
    return 0;
}