#include <iostream>
#include <string>

int i, j;

int     main(int argc, char *argv[])
{
    if(argc < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<std::endl;
        return(0);
    }
    else
    {
        i = 1;
        while(i < argc)
        {
            j = 0;
            while(argv[i][j] != '\0')
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            if (i < argc - 1)
                std::cout << ' ';
            i++;
        }
    }
    std::cout << std::endl;
}

