#include <iostream>
#include "Pony.hpp"

Pony::Pony( std::string name, std::string breed, std::string color, int height, int age ) :
	_name(name), _breed(breed), _color(color), _height(height), _age(age){
		std::cout << "new pony" << std::endl;
}

Pony::~Pony()
{
	std::cout << "dead pony" << std::endl;
}