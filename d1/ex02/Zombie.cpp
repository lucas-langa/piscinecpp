#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name) : _name(name) {
	return ;
};

void	Zombie::announce( void ) const {
	std::cout << "<" << this->_name << " (" << this->type << ")> Braiiiiiiinnnssss... " << std::endl;
	return ;
};

Zombie::~Zombie(  ) {
	return ;
};