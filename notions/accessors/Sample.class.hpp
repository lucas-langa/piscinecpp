#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {
	public:
		Sample( void );
		~Sample( void );

	/* used to get values of private members */
	int		getFoo( void ) const;
	/* used to assign values to private members*/
	void 	setFoo( int v );

	private:
		int _Foo;
};

#endif