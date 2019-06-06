#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"
#include <iostream>

class ZombieEvent {
	public:
		ZombieEvent( );
		~ZombieEvent( );
		std::string 	Zombie::*type;

		static void setZombieType( Zombie *  zombie, std::string type );
		Zombie 		*newZombie( std::string name, std::string type );
	private:

};

#endif