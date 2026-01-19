#ifndef SED_HPP
#define SED_HPP

#include <iostream>
#include <iomanip>
#include <fstream>

class sed
{
    private:
        std::fstream Filein;
        std::fstream Fileout;
        std::string  out;
        std::string  av2;
        std::string  av3;
    public:
        sed(char **av);
        ~sed();
        int open_files(char **av);
        void search_and_replace();

};


#endif