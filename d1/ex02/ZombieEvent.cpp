#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( ){
	std::cout << "Zombie making here" << std::endl;
};

ZombieEvent::~ZombieEvent(  ) {
	std::cout << "Zombie crush saga happening" << std::endl;
};

Zombie 		*ZombieEvent::newZombie( std::string name, std::string type ){ 
	
	Zombie *zombie = new Zombie( name );
	ZombieEvent::setZombieType( zombie, type );
	return ( zombie );
};

void    ZombieEvent::setZombieType( Zombie * zombie, std::string type ) {
	zombie->type = type;
	return ;
};

// Zombie* ZombieEvent::newZombie( std::string name );