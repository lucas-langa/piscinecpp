#include <iostream>
#include "Sample.class.hpp"

/* constructor */
Sample::Sample ( void ) {
	std::cout << "Constructor called" << std::endl;
	
	this->publicFoo = 0;
	std::cout << "this->publicFoo: " << this->publicFoo << std::endl;
	this->_privateFoo = 0;
	std::cout << "this->_privateFoo: " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	return ;
}

/* destructor */
Sample::~Sample( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

/* member function definition
* 	cpp always passes in a special parameter into member functions (*this*[pointer to the current instance] i think)
*/
void 	Sample::publicBar( void ) const {
	std::cout << "Member function publicBar called" << std::endl;
	return ;
}

void	Sample::_privateBar( void ) const {
	std::cout << "Member function _privateBar called" << std::endl;
	return ;
}