#include "sed.hpp"

int main(int ac, char **av)
{
    sed file(av);
    if (ac != 4)
        return 0;
    if (file.open_files(av))
        return 1;
    return 0;
}
