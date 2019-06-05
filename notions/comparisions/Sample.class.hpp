#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {
	public:
		Sample( int n );
		~Sample( void );

	/* used to get values of private members */
	int		getFoo( void ) const;
	/* used to assign values to private members*/
	void 	setFoo( int v );
	/* structurally compare values between two instances */
	int		compare( Sample * other ) const;

	private:
		int _Foo;
};

#endif