#include "Harl.hpp"

// void    print_message(e_level level, Harl msg)
// {
//     switch (level)
//     {
//         case DEBUG :
//         {
//             msg.complain("DEBUG");
//             break;
//         }
//         case INFO :
//         {
//             msg.complain("INFO");
//             break;
//         }
//         case WARNING :
//         {
//             msg.complain("WARNING");
//             break;
//         }
//         case ERROR :
//         {
//             msg.complain("ERROR");
//             break;
//         }
//         case UNKNOWN :
//             std::cout << "HMMMMMMMM" << std::endl;
//     }
// }

int main(int ac, char **av)
{
    Harl msg;

    if (ac != 2)
        return 0;
    msg.complain((std::string)av[1]);
    return 0;
}