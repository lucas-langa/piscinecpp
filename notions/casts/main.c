void	 dump_32bits_integer( int const n );
void	dumb_64bits_double( double const z );

int 		main( void ) {
	int 		a = 42; //reference value

	double 		b = a; //implicit conversion cast
	double 		c = (double)a; //explicit conversion cast

	double 		d = a; //implicit promotion -> ok
	int 		e = d; 	//implicit demotion -> harzadous
	int 		f = (int) d; //expliit demotion, ok, you're in charge

	dump_32bits_integer( a );

	dumb_64bits_double( b );
	dumb_64bits_double( c );

	dumb_64bits_double( d );
	dump_32bits_integer( e );
	dump_32bits_integer( f );

	return (0);
}