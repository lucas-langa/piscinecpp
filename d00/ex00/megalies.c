#include <iostream>

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

			//std::cout << 


			av[i][j] = toupper(av[i][j]);

			j++;

		}
		std::cout << av[i];

		std::cout << " ";

		i++;

	}

	//std::cout " " << std::endl;

	std::cout << std::endl;

	return ;

}



int	main( int ac, char **av )

{

	if (ac == 1)

	{

		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

		(void)av;

	}

	else

	{

		disp(av, ac);

	}

	return (0);

}
