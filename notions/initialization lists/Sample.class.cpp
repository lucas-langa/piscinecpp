#include <iostream>
#include "Sample.class.hpp"

/* constructor taking 3 arguments*/
Sample1::Sample1 ( char p1, int p2, float p3 ) {
	std::cout << "Constructor called" << std::endl;
	
	/* naively assinging stuff from the constructor to member attributes */
	this->a1 = p1; 
	std::cout << "this->a1 = " << this->a1 << std::endl;

	this->a2 = p2;
	std::cout << "this->a2 = " << this->a2 << std::endl;

	this->a3 = p3;
	std::cout << "this->a3 = "  << this->a3 << std::endl;

	return ;
}

/* destructor */
Sample1::~Sample1( void ) {
	std::cout << "Destructor called" << std::endl;
	return ;
}