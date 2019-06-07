#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int     main( void ) {
    
    ZombieEvent *instance = new ZombieEvent();
    Zombie * zbie = instance->newZombie("lucas+");
    zbie->announce();
    delete instance;
    delete zbie;
    zbie->announce();
    return (0);
}