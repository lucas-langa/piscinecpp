#ifndef SAMPLE_CLASS_H
# define SAMPLE_CLASS_H

class Sample {

	public:

		float const		pi;
		int				qd;

		Sample( float const f ); /* constructor */
		~Sample( void ); /* destructor */

		/* const ensures that the function does not modify the object */
		void 	bar( void ) const;
};

#endif