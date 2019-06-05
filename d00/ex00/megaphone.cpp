#include <iostream>

int 	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*av[1])
		{
			( (*av[1] >= 'A' && *av[1] <= 'Z') || (*av[1] >= 'a' && *av[1] <= 'z') ) ? std::cout << (char)(*av[1] - 32) : std::cout << *av[1];
			av[1]++;
		}
		std::cout << std::endl;
	}
}