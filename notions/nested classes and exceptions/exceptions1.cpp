#include <stdexcept>

void 	test1() {
	try
	{
		if (/* condition */)
		{
	-		throw std::exception();
			/* code */
		}
		else
		{
			/* code */
		}	
	}
	catch(const std::exception& e)
	{
		//handle error
	}
	
}

void	test2() {
	if ( /* there's an error */ )
	{	
		throw std::exception();
	}
	else
	{
		/* code */
	}
	
}

void 	test3() {
	try {
		test2();
	} catch ( std::exception& e ) {
		// handle error
	}
}

void 	test4() {
	class PEBKACException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Problem exists betweem keyboard and chair");
			}
	};
	try {
		test3();
	}
	catch (PEBKACException& e) {
		//handle user being an idiot
	}
	catch (std::exception& e) {
		// handle other exceptions that are like std::exception
	}
}