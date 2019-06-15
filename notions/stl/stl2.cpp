#include <algorithm>
#include <iostream>
#include <list>

void		displayInt(int i)
{
	std::cout << i << std::endl;
}

int 		main() {
	std::list<int> 		lst;

	lst.push_back(10);
	lst.push_back(23);
	lst.push_back(3);
	lst.push_back(17);
	lst.push_back(20);
	lst.push_back(42);

	for_each(lst.begin() , lst.end() , displayInt);
	return (0);
}