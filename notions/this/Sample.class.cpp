#include <iostream>
#include "Sample.class.hpp"

/* constructor */
Sample::Sample ( void ) {
	std::cout << "Constructor called" << std::endl;
	
	this->foo = 42; /* modifying a member variable of this current instance? , -> because the variable is a pointer*/
	std::cout << "this->foo: " << this->foo << std::endl;

	this->bar();

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
void 	Sample::bar( void ) {
	std::cout << "Member function bar called" << std::endl;
	return ;
}