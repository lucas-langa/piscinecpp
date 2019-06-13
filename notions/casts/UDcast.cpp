#include <iostream>

class Parent					{};
class Child1 : public Parent 	{};
class Child2 : public Parent 	{};

int			main( void ) {
	Child1 				a; //reference value

	Parent *			b = &a;					//implicit 'reinterpretation' cast
	Parent *			c = ( Parent * ) &a;	//Explicit 'reinterpretation' cast

	Parent *			d = &a; 				//implicit upcast -> ok
	Child1 *			e = d;					//implicit downcast -> hell no!
	Child2 * 			f = ( Child2 * ) d;		//Explicit downcast -> Ok, but really?!

	return (0);
}