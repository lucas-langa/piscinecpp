#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "ZombieEvent.hpp"

class ZombieHorde {
    public:
        static int ncopy;
        ZombieHorde( int N );
        ~ZombieHorde (  );
        void        ZombieHorde::announce ( void );
        Zombie *zombies;
        void 		ZombieHorde::newZombies( void );
        void        ZombieHorde::ZombieKiller( void );
        int N;
        
};

#endif