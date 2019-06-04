#include <iostream>
#include "Contact.class.hpp"

int 	main(int ac, char **av)
{
    // Contact noob();
    std::string first_name = "\n";
    std::string last_name;
    int i =0;
    // std::cout << first_name.length();
    
    while (i < 3)
    {
        std::cout << "input some stuff" << std::endl;
        std::getline(std::cin, first_name, '\n');
        if (first_name.length() == 0 || (first_name.length() == 1 && first_name[0] == '\n'))
            continue;
        i++;
        std::cout << first_name << std::endl;
    }

/*	
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
	}*/
	/* std::cin >> n >> n2 >> n3;
	n += n2 + n3;
	std::cout << n << std::endl; */
	return (0);
}