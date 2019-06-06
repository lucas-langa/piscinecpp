#include <iostream>
#include "Validators.class.hpp"

int main()
{
	std::string data ="jj4";
	std::string field = "first_name";
    if (!Validators::helper(data, field))
        {std::cout << "false";}
    else    
        {std::cout << "true";}
    return (0);
}