#include <iostream>

class Cat
{
public:
	Cat( void );
	class Leg
	{
		public:
		Leg( void );
		//[...]
	};
};

class Dog
{
public:
	Dog( void );
	class Leg
	{
		public:
		Leg( void );
		//[...]
	};
};

Cat::Cat( void ) {
	std::cout << "cat made" << std::endl;
}

Cat::Leg::Leg( void ) {
	std::cout << "Leg from cat here" << std::endl;
}

Dog::Dog( void ) {
	std::cout << "Dog made" << std::endl;
}

Dog::Leg::Leg( void ) {
	std::cout << "Dog's leg made" << std::endl;
}

int 	main()
{
	Cat		 	somecat;
	Cat::Leg 	somecatsleg;
	return (0);
}