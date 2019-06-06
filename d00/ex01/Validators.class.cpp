#include <iostream>
#include "Validators.class.hpp"

Validators::Validators ( void ) {
    return ;
};

Validators::~Validators( void ) {
    return ;
};

bool    Validators::name_validator( std::string name ) {
    if (name.find_first_of("0123456789"))
    {
        std::cout << "no numbers" << std::endl;
        return (false);
    }
	else if (name[1] == '\n')
	{
		std::cout << "enter something" << std::endl;
	}
	return (true);
};

bool Validators::email_validator( std::string email )
{
	return (true);
}

bool Validators::postal_address_validator( std::string address )
{
	return (true);
}

bool 	Validators::date_validator( std::string date ){
	return (true);
};

bool    Validators::helper( std::string data, std::string field ){
    if (data.empty())
    {
        std::cout << field << " is empty" << std::endl;
        return (false);
    }
    else
    {
        if ( !field.compare("first_name") || !field.compare("last_name") 
			|| !field.compare("underwear_color") || !field.compare("favorite_meal") 
			|| !field.compare("darkest_secret") || !field.compare("login") 
			|| !field.compare("nickname") )
            return (Validators::name_validator(data));
        else if (!field.compare("phone_number") || !field.compare("birthday_date"))
		{
			return (Validators::date_validator(data));
		}
		else if (!field.compare("email_address"))
		{
			return (Validators::email_validator(data));
		}
		else if (!field.compare("postal_address"))
		{
			return (Validators::postal_address_validator(data));
		}
    }
    std::cout << "Something ain't right" << std::endl;
    return (false);
};