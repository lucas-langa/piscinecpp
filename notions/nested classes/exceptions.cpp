#include <stdexcept>

void 	test1() {
	try {
		if (/*error*/) { 
			throw std::exception();
		}
		else {
			//do stuff
		}
	}
	catch (std::exception e) {
		//handle error here
	}
}

void 	test2() {
	if (/*error*/) {
		throw std::exception();
	}
	else {
		//handle error
	}	
}

void 	test3() {
	try {
		test2();
	} catch ( std::exception & e ) {
		//handle error
	}
} 