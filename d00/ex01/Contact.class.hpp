#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>

class Contact {
	public:

		Contact( void );
		~Contact ( void );

		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
	private:
		std::string underwear_color;
		std::string darkest_secret;
};

#endif