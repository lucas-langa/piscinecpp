#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

public: /* accessible from anywhere */

	int 	publicFoo; /* member attribute */

	Sample( void ); /* constructor */ /*can be made private*/
	~Sample( void ); /* destructor */

	void 	publicBar( void ) const;

private: /* accessible from inside the class */
	int 	_privateFoo; /*common convention to use _*/

	/* _privateBar will not modify object */
	void	_privateBar( void ) const;
};

#endif