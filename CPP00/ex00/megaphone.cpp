#include <iostream>

int main(int ac, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE. *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			std::cout << (char)(std::toupper(argv[i][j]));
			j++;
		}
		if (i != ac - 1)
			std::cout << " ";
		i++;
	}
	std::cout << std::endl;
	return (0);
}
