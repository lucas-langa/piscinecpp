#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include <iostream>

int     main( void ) {
    
    ZombieEvent *instance = new ZombieEvent();
    Zombie * zbie = instance->newZombie("lucas+");
    return (0);
}