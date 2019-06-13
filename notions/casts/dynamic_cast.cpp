#include <iostream>
#include <typeinfo>
#include <exception>

class Parent					{ public : virtual ~Parent( void ) {} };
class Child1 : public Parent 	{};
class Child2 : public Parent 	{};

int 		main( void ) {
	Child1 		a; 				//Reference value
	Parent *	b = &a;			//Implicit upcast-> ok
	
	//explicit downcast ->.....
	Child1 *		c = dynamic_cast<Child1 *>(b);
	if (c == NULL)
	{
		std::cout << "CONversion is not ok\n";
	} else
	{
		std::cout << "conversion is ok\n";
	}
	//explicit downcast --.....
	try
	{
		Child2 &	d = dynamic_cast<Child2 &>(*b);
		std::cout << " conversion is ok\n";
	}
	catch(const std::bad_cast &bc )
	{
		std::cerr << "Conversion is not ok: " bc.what() << '\n';
		return (0);
	}
	return (0);
}