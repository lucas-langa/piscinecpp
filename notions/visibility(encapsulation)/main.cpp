#include <iostream>
#include "Sample.class.hpp"

int 	main() {
	Sample instance;

	instance.publicFoo = 42;
	std::cout << "Instance.publicFoo: " << instance.publicFoo << std::endl;

	// instance._privateFoo = 42;
	// std::cout << "Instance._privateFoo: " << instance._privateFoo << std::endl;

	instance.publicBar();
	// instance._privateBar();

	return (0);
}