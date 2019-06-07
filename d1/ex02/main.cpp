#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>
#include <unistd.h>

int     main( void ) { 
    ZombieEvent *instance = new ZombieEvent();
    Zombie * zbie = instance->newZombie("lucas+");
    zbie->announce();
    delete instance;
    delete zbie;
    zbie->announce();
    ZombieEvent Stackinstance = ZombieEvent();
    Zombie Szbie = Stackinstance.randomChump();
    return (0);
}