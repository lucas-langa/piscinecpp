#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H
#include <iostream>

class Contact {
	public:

		Contact();
		~Contact ( void );
		void add_contact(void);
		std::string get_attr( std::string attr_name  ) const;

		void 	set_fn( std::string first_name);
		void 	set_ln( std::string last_name );
		void 	set_nname( std::string nickname );
		void 	set_login( std::string login );
		void	set_paddress( std::string postal_address );
		void 	set_email( std::string email_address );
		void 	set_number( std::string phone_number );
		void 	set_bday( std::string birthday_date );
		void 	set_favmeal( std::string favorite_meal );
		void	set_panty_color( std::string underwear_color );
		void	set_secret( std::string darkest_secret ); 
		
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