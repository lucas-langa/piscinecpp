#include <iostream>

class Parent					{};
class Child1 : public Parent 	{};
class Child2 : public Parent 	{};

class Unrelated					{};

int 		main( void ) {
	Child1 		a; 					//reference value

	Parent * 		b = &a;								//implicit upcast -> ok
	Child1 *		c = b;								//implicit downcast -> Hell no!
	Child2 			d = static_cast<Child2 *>(b);		//Explicit downcast -> OK, i obey

	Unrelated * 	e = static_cast<Unrelated *>(&a);

	return (0);
}

/* int 		main( void ) {
	int 		a = 42; 					//reference value

	double 		b = a;						//implicit promotion -> ok
	int			c = b;						//implicit demotion -> Hell no!
	int 		d = static_cast<int>(b);	//Explicit demotion -> OK, i obey

	return (0);
} */