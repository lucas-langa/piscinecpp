#include <string>
#include <iostream>

class Character {
	public:
		virtual void 	sayHello( std::string const & target );
};

class Warrior : public Character {
	//this is a character
	public:
		virtual void 	sayHello( std::string const & target );
};

class Cat {
	// [...]
};

void 	Character::sayHello( std::string const & target ) {
	std::cout << "Hello " << target << " !" << std::endl;
	return ;
};

void 	Warrior::sayHello( std::string const & target) {
	std::cout << "F*** off " << target << " , I don't like you !" << std::endl;
	return ;
};

int		main(void) {
	// This is fine, Warrior is a Warrior
	Warrior*	a =   new Warrior();

	//This is also ok because warrior is a character
	//this will be treated as a character and not a warrior
	Character*	b = new Warrior();

	// This would not be fine because Character is not a warrior
	//Although they are related, and W is a C, the reverse is not tru
	// Warrior*  c = new Character();

	// This wouldn't work either because Cat is not a character
	//THey aren't even related
	//Character* d = new Cat();

	a->sayHello("students");
	b->sayHello("students");
	return (0);
}