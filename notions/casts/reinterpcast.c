#include <stdio.h>

int 		main( void ) {

	float 		a = 420.042f; //reference value 

	void * 		b = &a;  //implicit reinterpretation cast
	void * 		c = (void *)&a; //implicit reinterpretation cast

	void *		d = &a; 	//implicit promotion ->ok
	int *		e = d;		//implicit demotion -> harzadous
	int *		f = (int *)d; //explicit demotion -> ok, i obey

	printf( "%p, %f\n", &a, a );

	printf( "%p\n", b );
	printf( "%p\n", c );

	printf( "%p\n", d );
	printf( "%p, %d\n", e, *e );
	printf( "%p, %d\n", f, *f );

	return (0);
}