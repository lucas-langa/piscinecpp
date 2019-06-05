#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( int n ) {
	std::cout << "Constructor called" << std::endl;

	this->setFoo( n );
	std::cout << "this->getFoo(): " << this->getFoo() << std::endl;

	return ;
}

Sample::~Sample ( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int 	Sample::getFoo( void ) const {
	return (this->_Foo);
}

void 	Sample::setFoo( int v ) {
	if ( v >= 0 )
		this->_Foo = v;
	return ;
}

int		Sample::compare( Sample * other ) const {
	if ( this->_Foo < other->getFoo() )
		return (-1);
	else if (this->_Foo > other->getFoo() )
		return (1);
	return (0);
}