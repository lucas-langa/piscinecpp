#ifndef SAMPLE_CLASS_H
#define SAMPLE_CLASS_H

class Sample {

public:

	Sample( void );
	~Sample( void );
	/* static methods can be accessed without creating an instance of the class */
	static int 		getNbInst( void );

private:
	/* static instance variables can also be accessed without creating class instances */
	static int 		_nbInst;

};

#endif