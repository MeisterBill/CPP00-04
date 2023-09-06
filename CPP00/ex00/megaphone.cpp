#include <iostream>

int main(int ac, char **argv)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    else
    {
        int i = 1;
        while (argv[i])
        {
            int j = 0;
            while (argv[i][j])
            {
                std::cout << (char)toupper(argv[i][j]);
                j++;
            }
            i++;
        }
    }
    std::cout << std::endl;
}
