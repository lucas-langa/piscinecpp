#include <iostream>
#include <fstream>

int 	main( void ) {
	std::ifstream		ifs("numbers"); //opening this file
	unsigned  int 		dst;
	unsigned  int		dst2;
	ifs >> dst >> dst2; //reading intergers into these vars

	std::cout << dst << " " << dst2 << std::endl;
	ifs.close();//closing input file stream

	// ----------------------------- idk why this is?!
	
	std::ofstream	ofs("test.out");//opening test.out,

	ofs << "I like ponies a whole damn lot" << std::endl;
	// wrting the string into the file
	ofs.close();
	//closing the open file stream
	// stringstreams
	return (0);
}