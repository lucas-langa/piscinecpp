#include <iostream>

/* template class */

template< typename T, typename U >
/* T var used in place of actual variables */

class 	List {

public:
	List<T>( T const & content ) {

	}

	List<T>( List<T> const & list ) {

	}

	~List<T>( void ) {

	}

private:
	T *			_content;
	List<T> * 	_next;
};

int 	main( void ) {

	List<int>		a(42);
	List< float > 	b( 3.14f );
	List< List <int>> c(a);
	return (0);
}