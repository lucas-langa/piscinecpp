#include <iostream>

int 	main(void)
{
	std::string s;
	std::string acceptable_commands[3] = {"ADD", "EXIT", "SEARCH"};
	int n = 0;
	int n2 = 8;
	int n3 = 8;
	while (1)
	{
		std::cin >> s;
		if (s.compare(acceptable_commands[0]) == 0)
		{
			std::cout << "you gave me add" << std::endl;
			break ;
		}
		else
		{
			std::cout << "i got " << s << std::endl;
			break;
		}
	}
	/* std::cin >> n >> n2 >> n3;
	n += n2 + n3;
	std::cout << n << std::endl; */
	return (0);
}