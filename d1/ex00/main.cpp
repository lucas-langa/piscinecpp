#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap() {
	Pony *shortHorse = new Pony("lucas", "abnormal", "black", 1.8f, 21);
	shortHorse->entertain();
	delete shortHorse;
	return ;
}

void 	ponyOnTheStack() {
	Pony tallHorse  = Pony("kabelo", "abnormal", "black", 1.78f, 20);
	tallHorse.entertain();
	return ;
}

int 	main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}