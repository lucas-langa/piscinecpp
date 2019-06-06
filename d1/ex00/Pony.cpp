#include <iostream>
#include "Pony.hpp"

Pony::Pony( std::string name, std::string breed, std::string color, float height, int age ) :
	_name(name), _breed(breed), _color(color), _height(height), _age(age){
		std::cout << "new pony " <<this->_name << std::endl;
}
void Pony::entertain( void )
{
	std::cout << "I'm a pony of " << this->_breed << " type look at me!" << std::endl;
	return ;
};

std::string Pony::get_name( void ) const {
	return (this->_name);
};
std::string Pony::get_breed( void ) const {
	return (this->_breed);
};
std::string Pony::get_color( void ) const {
	return (this->_color);
};
float 		Pony::get_height( void ) const {
	return (this->_height);
};
int 		Pony::get_age( void ) const	{
	return (this->_age);
};

Pony::~Pony()
{
	std::cout << "dead pony" << std::endl;
}