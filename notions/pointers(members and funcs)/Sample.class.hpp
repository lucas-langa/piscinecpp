#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

public:

	int foo;

	Sample( void );
	~Sample( void );
	/* static methods can be accessed without creating an instance of the class */
	void		bar( void ) const;

};

#endif