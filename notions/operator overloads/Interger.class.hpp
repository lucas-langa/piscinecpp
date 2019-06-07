#ifndef INTERGER_CLASS_HPP
# define INTERGER_CLASS_HPP

#include <iostream>

class Interger {
public:

	Interger( int const n );
	~Interger( void );

	int 		getValue( void ) const;

	Interger & 	operator=( Interger const & rhs );
	Interger 	operator+( Interger const & rhs) const;

	private:

		int 	_n;
};
/* 	guidelines for operator overloads
*	the overload must be natural-no strange operator behaviour
*	don't make plus go minus
*	just don't do it!, it's rare cases to use operator overloads like a functor
*	don't use them everywhere
*/
std::ostream & 		operator << ( std::ostream & o, Interger const & rhs);

#endif