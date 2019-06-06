#include <iostream>
#include "Sample.class.hpp"

int		main()
{
	Sample		instance; //stack
	Sample * 	instancep  = &instance; //pointer on the stack, of type Sample

	int 	Sample::*p = NULL; //pointer on an attribute/member of the sample class, p b the name
	void 	(Sample::*f)( void ) const; //ptr to mem  ber functions

	p  = &Sample::foo;

	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instance.*p = 21; //asigning using the instance
	std::cout << "Value of member foo: " << instance.foo << std::endl;
	instancep->*p = 42; //assigning using the instance pointer
	std::cout << "Value of member foo: " << instance.foo << std::endl;

	f = &Sample::bar;

	(instance.*f)(); //using the instance to access the ptr to member function
	(instancep->*f)(); //using a pointer to member to access the instance  ptr

	return (0);		
}