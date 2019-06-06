#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {
	public:
		ZombieEvent( );
		~ZombieEvent( );
		void setZombieType( std::string type );
		Zombie *newZombie( std::string name );
	private:

};

#endif