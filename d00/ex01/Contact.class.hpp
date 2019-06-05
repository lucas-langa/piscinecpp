#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>

class Contact {
	public:

		Contact( void);
		set_details( std::string fn, std::string ln,  )
		~Contact ( void );
		std::string get_attr( std::string attr_name  ) const;
		std::string valid[] = {"first_name","last_name",
			"nickname","login","postal_address","email_address","phone_number",
			"birthday_date","favorite_meal","underwear_color","darkest_secret"};
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string login;
		std::string postal_address;
		std::string email_address;
		std::string phone_number;
		std::string birthday_date;
		std::string favorite_meal;
		std::string underwear_color;
		std::string darkest_secret;
	
};

#endif
