

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        // av[1] 
        // if (parseType(av[1]) == -1)
        // {
        //     // Error
        //     return 1;
        // }
        ScalarConverter::convert(av[1]);

        return 0;
    }
    // Error
    std::cerr << "Error: ARGS Count\n";
    return 1;    
}