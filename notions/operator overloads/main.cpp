#include <iostream>
#include "Interger.class.hpp"

int 	main() {
	Interger 	x(30);
	Interger	y(10);
	Interger 	z(0);

	y = Interger( 12 );

	z = x + y;
	std::cout << "value of z is :: " << z << std::endl;
	return (0);
}