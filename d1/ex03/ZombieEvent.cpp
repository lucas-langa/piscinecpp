#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent( ){
	std::cout << "Zombie making here" << std::endl;
};

ZombieEvent::~ZombieEvent(  ) {
	std::cout << "Zombie crush saga happening" << std::endl;
};

Zombie ZombieEvent::randomChump( void ) {

	std::string names[] = {"Kabelo", "Caeser", "Lucas", "Josephine", "Hanako", "Natsuki", "Morrison"};
    srand(time(NULL));
	Zombie zombieChump = Zombie(names[rand() % 6]);    
    zombieChump.announce();
	return (zombieChump);
}

Zombie 		*ZombieEvent::newZombie( std::string name ){ 
	
	Zombie *zombie = new Zombie(name );
	ZombieEvent::setZombieType( zombie, "asian");
	return (zombie);
};

void    ZombieEvent::setZombieType( Zombie * zombie, std::string type ) {
	zombie->type = type;
	return ;
};

// Zombie* ZombieEvent::newZombie( std::string name );