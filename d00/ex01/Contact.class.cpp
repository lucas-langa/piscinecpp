#include "Contact.class.hpp"
#include <iostream>

Contact::Contact() : first_name(""), last_name("")
, nickname(""), login(""),
email_address(""), phone_number(""), birthday_date(""), 
favorite_meal(""), underwear_color(""), darkest_secret("")
{
	return ;
}
 
void     Contact::add_contact()
{
    std::cout << "Please give me first name";
    std::getline(std::cin, this->first_name);
}

Contact::~Contact( void )
{
	return ;
}
// std::string ln, std::string name, std::string login, std::string postal_addr, std::string email_addr, std::string phone, std::string birthdate, std::string fav_meal, std::string panties, std::string secret 