#include <iostream>

//template definition
template < typename T >
//function template, list or type of type variables for our template
/* T		max( T x, T y) {
	return ( x >= y ? x : y );
} */

/* T const &		max( T const & x, T const & y) {
	return ( x >= y ? x : y );
}
 */


T		max( T const & x, T const & y) {
	return ( x >= y ? x : y );
}

int 	foo(int x){
	std::cout << "Long computing time" << std::endl;
	return (x);
}

int 		main( void ) {
	int 		a = 21;
	int			b = 42;

	std::cout << " Max of  " << a << " And " << b << " is ";
	std::cout << max<int>( a, b ) << std::endl; //Implicit instantiation
	std::cout << " Max of " << a << " and " << b << " is ";
	std::cout << max( a, b ) << std::endl; //Implicit instantiation
	
	float 		c = -1.7f;
	float 		d = 4.2f;

	std::cout << "Max of " << c << " and  " << d << " is ";
	std::cout << max<float>( c, d ) << std::endl; //implicit instantiation
	std::cout << "Max of " << c << " and " << d << " is ";
	std::cout << max( c, d ) << std::endl; //implicit instantiation

	//no problem here...
	int 		ret = max<int>( foo(a), foo(b) ); //explicit instantiation
	std::cout << "Max of " << a << " and " << b << " is ";
	std::cout << ret << std::endl;

	return (0);


}