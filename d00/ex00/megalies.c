// #include <iostream>
#include <ctype.h>
#include <stdio.h>
#include <unistd.h>

void 	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, *&str, 1);
		str++;
	}
	return ;
}

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
//			putchar(toupper(av[i][j]));
			av[i][j] = toupper(av[i][j]);
			j++;
		}
		ft_putstr(av[i]);
		// std::cout << av[i];
		putchar(' ');
		i++;
	}
	ft_putstr(" ");
	// std::cout << std::endl;
	return ;
}

int	main( int ac, char **av )
{
	if (ac == 1)
	{
		/*std::cout <<*/ ft_putstr("* LOUD AND UNBEARABLE FEEDBACK NOISE *");/* << std::endl;*/
		(void)av;
	}
	else
	{
		disp(av, ac);
	}
	return (0);
}
