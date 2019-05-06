#include <iostream>
#include "Sample.class.hpp"

Sample::Sample( void ) {

	std::cout << "Called constructor" << std::endl;
	return ;
}

Sample::~Sample( void ) {

	std::cout << "destructor called" << std::endl;
	return ;
}
