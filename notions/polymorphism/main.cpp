#include "Sample.class.hpp"

int 	main( void ) {
	Sample instance;
	instance.bar('a');
	instance.bar(42);
	instance.bar(3.14f);
	instance.bar(instance);
	return (0);
}