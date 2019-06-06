#ifndef VALIDATORS_CLASS_H
# define VALIDATORS_CLASS_H
#include <iostream>

class Validators {
    public:
        Validators( void );
        ~Validators( void );
        static bool helper( std::string data, std::string field );
        static bool name_validator( std::string name );
        static bool date_validator( std::string date );
        static bool email_validator( std::string email );
        static bool postal_address_validator( std::string address );
};

#endif