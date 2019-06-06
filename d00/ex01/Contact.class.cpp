#include "Contact.class.hpp"
#include "Validators.class.hpp"
#include <iostream>

Contact::Contact() : first_name(""), last_name("")
, nickname(""), login(""),
email_address(""), phone_number(""), birthday_date(""), 
favorite_meal(""), underwear_color(""), darkest_secret("")
{
	return ;
};


void     Contact::add_contact() {
    // std::cout << "time to create a contact, please fill in every field: " << std::endl;
    std::string temp = "";
    std::cout << "Enter your first name: " << std::endl;
    std::getline(std::cin, temp);
    set_fn(temp);

    std::cout << "Enter your last name: " << std::endl;
    std::getline(std::cin, temp);
    set_ln(temp);

    std::cout << "Enter your nick name: " << std::endl;
    std::getline(std::cin, temp);
    set_nname(temp);

    std::cout << "Enter your login: " << std::endl;
    std::getline(std::cin, temp);
    set_login(temp);

    std::cout << "Enter your postal address: " << std::endl;
    std::getline(std::cin, temp);
    set_paddress(temp);

    std::cout << "Enter your email address: " << std::endl;
    std::getline(std::cin, temp);
    set_email(temp);

    std::cout << "Enter your phone number " << std::endl;
    std::getline(std::cin, temp);
    set_number(temp);

    std::cout << "Enter your postal birthday date: " << std::endl;
    std::getline(std::cin, temp);
    set_bday(temp);

    std::cout << "Enter your fav meal: " << std::endl;
    std::getline(std::cin, temp);
    set_favmeal(temp);
    
    std::cout << "Enter your UNDERWEAR COLOR: " << std::endl;
    std::getline(std::cin, temp);
    set_panty_color(temp);

    std::cout << "Enter your SECRET: " << std::endl;
    std::getline(std::cin, temp);
    set_secret(temp);
  
  
    return ;
};

void    Contact::set_fn( std::string first_name ) {
    if (Validators::helper(first_name, "first_name"))
        this->first_name = first_name;
    else
        this->first_name = "garbage";
    return ;
};

void 	Contact::set_ln( std::string last_name ) {
    if (Validators::helper(last_name, "last_name"))
        this->last_name = last_name;
    else
        this->last_name = "garbage";
    return ;
};

void    Contact::set_nname( std::string nickname ) {
    if (Validators::helper(nickname, "nickname"))
        this->nickname = nickname;
    else
        this->nickname = "garbage";        
    return ;
};

void    Contact::set_login( std::string login ) {
    if (Validators::helper(login, "login"))
        this->login = login;
    else
        this->login = "garbage";
    return ;
};

void    Contact::set_paddress( std::string postal_address ) {
    if (Validators::helper(postal_address, "postal_address"))
        this->postal_address = postal_address;
    else
    {
        this->postal_address = "garbage";
    }
    
    return ;
};

void 	Contact::set_email( std::string email_address ){
    if (Validators::helper(email_address, "email_address"))
        this->email_address = email_address;
    else
        this->email_address = "garbage";
    return ;
};

void 	Contact::set_number( std::string phone_number ){
    if (Validators::helper(phone_number, "phone_number"))
        this->phone_number = phone_number;
    else
        this->phone_number = "garbage";
    return ;
};

void 	Contact::set_bday( std::string birthday_date ){
    if (Validators::helper(birthday_date, "birthday_date"))
        this->birthday_date = birthday_date;
    else
        this->birthday_date = "garbage";
    return ;
};

void 	Contact::set_favmeal( std::string favorite_meal ){
    if (Validators::helper(favorite_meal, "favorite_meal"))
        this->favorite_meal = favorite_meal;
    else
        this->favorite_meal = "garbage";
    return ;
};

void	Contact::set_panty_color( std::string underwear_color ){
    if (Validators::helper(underwear_color, "underwear_color"))
        this->underwear_color = underwear_color;
    else
        this->email_address = "garbage";
    return ;
};

void	Contact::set_secret( std::string darkest_secret ){
    if (Validators::helper(darkest_secret, "darkest_secret"))
        this->darkest_secret = darkest_secret;
    else
        this->darkest_secret = "gabage";
    return ;
};

Contact::~Contact( void ) {
	return ;
};


// std::string ln, std::string name, std::string login, std::string postal_addr, std::string email_addr, std::string phone, std::string birthdate, std::string fav_meal, std::string panties, std::string secret 