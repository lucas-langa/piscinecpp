#include <iostream>
#include "Sample.class.hpp"

/* constructor */
Sample::Sample ( float const f ) : pi( f ), qd( 42 ) {
	std::cout << "Constructor called" << std::endl;
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
void 	Sample::bar( void ) const{
	std::cout << "this->pi = " << this->pi << std::endl;
	std::cout << "this->qd = " << this->qd << std::endl;

 	/*	
	* 	attempt to modify qd from read only member function won't work because it's declared const 
	*	this->qd = 0;
	*	std::cout << "this->qd = " << this->qd << std::endl;
	*/
	return ;
}