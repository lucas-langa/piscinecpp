#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>

ZombieHorde::ZombieHorde( int N ){
    this->N = N;
	return ;
};

void 		ZombieHorde::newZombies( void ) {
    
    Zombie *zombie = new Zombie[this->N];
    std::string names[] = {"Kabelo", "Caeser", "Lucas", "Josephine", "Hanako", "Natsuki", "Morrison"};
    srand(time(NULL));
	names[rand() % 6];
    int i = 0;
    while (i < this->N)
    {
        zombie[i]._name = names[rand() % 6];
        i++;
    }
    this->zombies = zombie;
	return ;
};

void        ZombieHorde::ZombieKiller( void ) {
    delete [] this->zombies;
    return ;
}

void        ZombieHorde::announce ( void ) {
    for (size_t i = 0; i < this->N; i++)
    {
        this->zombies[i].announce();
    }
    return ;
}

ZombieHorde::~ZombieHorde( void ) {
    this->ZombieKiller();
    return ;
}