#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( ) {
	std::cout << "A zombie by the name " << this->_name << " has spawned" << std::endl;
	return ;
};

void	Zombie::announce( void ) const {
	std::cout << "<" << this->_name << " (" << this->type << ")> Braiiiiiiinnnssss... " << std::endl;
	return ;
};

Zombie::~Zombie(  ) {
	std::cout << this->_name << " has died"<< std::endl;
	return ;
};