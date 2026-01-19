#include "sed.hpp"

sed::sed(char **av)
{
    av2 = av[2];
    av3 = av[3];
}

sed::~sed()
{
}

void    sed::search_and_replace()
{
    std::string line;
    int begin;

    while (std::getline(Filein, line))
    {
        while (line.find(av2) != std::string::npos)
        {
            begin = line.find(av2);
            line.erase(begin, av2.length());
            line.insert(begin, av3);
        }
        Fileout << line << std::endl;
    }
}

int    sed::open_files(char **av)
{
    out = av[1];
    if (av2.length() == 0)
        return 1;
    out.insert(out.length(), ".replace");
    Filein.open(av[1], std::ios::in);
    Fileout.open(out.c_str(), std::ios::out);
    if (!Filein || !Fileout)
    {
        std::cout << "Failed to create a file" << std::endl;
        return 1;
    }
    search_and_replace();
    Filein.close();
    Fileout.close();
    return 0;
}