#include <iostream>
#include "Interger.class.hpp"

Interger::Interger( int const n ) : _n(n) {

	std::cout << "Constructor called with value " << n << std::endl;
	return ;
}

Interger::~Interger( void ) {
	std::cout << "Destructor called with value " << this->_n << std::endl;
	return ;
}

int		Interger::getValue( void ) const {
	return ( this->_n );
}

Interger	& 	Interger::operator=( Interger const &rhs){

	std::cout << "Assignment operator called from " <<this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;
	this->_n = rhs.getValue();

	return (*this);
}

Interger		Interger::operator+( Interger const & rhs ) const {
	
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return ( Interger (this->_n + rhs.getValue() ) );
}

std::ostream 	& 	operator<<(std::ostream & o, Interger const & rhs ) {
	o << rhs.getValue();
	return (o);
}