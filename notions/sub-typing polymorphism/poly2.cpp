#include <string>
#include <iostream>

class   ACharacter {

	private:
		std::string _name;
	public:
	/* 
	* should designate 
	* pure function ,this method cannot be implemented,
	* the class cannot be instantiated
	*/ 
		virtual void    attack( std::string const & target ) = 0;
		void            sayHello( std::string const & target );
};

class   Warrior : public ACharacter {

	public:
		virtual void    attack( std::string const & target );
};

void    ACharacter::sayHello( std::string const & target ) {
	 std::cout << "Hello " << target << " !" << std::endl;
	 return ;
};

void 	Warrior::attack( std::string const & target ) {
	std::cout << "*attacks " << target << " with a sword*" << std::endl;
	return ;
};

class 	ICoffeeMaker {
// interface
	public:
		virtual void 		fillWaterTank( IWaterSource * src ) = 0;
		virtual ICoffee*	makeCoffee( std::string const & type ) = 0;
};

int 	main(){
	ACharacter* 	a = new Warrior();

	// This would NOT be ok because ACharacter is abstract
	// ACharacter* 	b  = new ACharacter();

	a->sayHello("students");
	a->attack("roger");
	return (0);
}