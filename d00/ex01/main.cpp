#include <iostream>
#include "Contact.class.hpp"
#include "Validators.class.hpp"

int 	main(int ac, char **av)
{
    Contact noob[8];
    std::string s;
	std::string acceptable_commands[3] = {"ADD", "EXIT", "SEARCH"};
	int i = 0;
	while (1)
	{
		std::cout << "enter a command" << std::endl;
		std::cin >> s;
		if (!s.compare(acceptable_commands[0]))
		{
			if (i == 8)
			{
				break;
				std::cout << "too many contacts, bye" << std::endl;
			}
			noob[i].add_contact();
			i++;
		}
		else if (!s.compare(acceptable_commands[1]))
			break ;
		else if (!s.compare(acceptable_commands[2]))
		{
			std::cout << "i got " << s << std::endl;
		}
		continue ;
		
	}
	return (0);
 }
