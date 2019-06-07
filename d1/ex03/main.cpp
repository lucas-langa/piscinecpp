#include "Zombie.hpp"
#include "ZombieEvent.hpp"
#include "ZombieHorde.hpp"
#include <iostream>
#include <unistd.h>

int     main( void ) { 
    ZombieEvent *instance = new ZombieHorde( 30 );
        
    
    return (0);
}