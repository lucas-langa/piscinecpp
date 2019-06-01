<<<<<<< HEAD
#include <iostream>

int 	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*av[1])
		{
			std::cout << (char)toupper(*av[1]);
			av[1]++;
		}
		std::cout << std::endl;
	}
}
=======
#include <iostream>
#include <ctype.h>
#include <stdio.h>

void	disp(char **av, int ac)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			av[i][j] = (av[i][j] >= 'a' && av[i][j] <= 'z') ? av[i][j] - 32 : av[i][j];
			j++;
		}
		std::cout << av[i];
		std::cout << ' ';
		i++;
	}
	std::cout << std::endl;
	return ;
}

int	main( int ac, char **av )
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		(void)av;
	}
	else
		disp(av, ac);
	return (0);
}
>>>>>>> c63eaaa87dd0613a900a90d417b97b2530aba038
