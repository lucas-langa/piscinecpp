#ifndef SAMPLE_CLASS_HPP
# define SAMPLE_CLASS_HPP
#include <iostream>

/* 
*  canonical form  - just a standard.
*   has a default constructor,copy constructor constructor, takes instance of the class being defined and
*   returning a copy of the class
*   equal assignment operator =, allows making assignments from this class 
*/

class Sample {

    public:

        Sample( void ); //default canonical
        Sample( int const n ); //parametric constructor
        Sample( Sample const & src ); //copy canonical
        ~Sample( void ); //default destructor

        /*= assignment operator overload */
        Sample &    operator=( Sample const & rhs ); //canonical

        int         getFoo( void ) const;

    private:
        int     _foo;
};

std::ostream &      operator<<( std::ostream & a, Sample const & i);

#endif