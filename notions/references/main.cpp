#include <iostream>

/* reference, an alias for an existing variable,
	a pointer that is constant, always unreferenced and const,
	cannot be reassigned
	needs to be assigned when created
	like a dereferenced pointer, do not need to be unreferenced
  */
int		main()
{
	int		numberOfBalls = 42;

	int* 	ballsPtr = &numberOfBalls;
	int& 	ballsRef = numberOfBalls; /* reference to numberOfBalls */

	std::cout 	<< numberOfBalls << " " << *ballsPtr << " "	 << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl;
	return (0);		
}