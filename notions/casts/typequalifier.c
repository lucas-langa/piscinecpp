int 	main(void ) {
	int a = 42;  	//reference value 

	int 		const * b = &a; //implicit type qualifier cast
	int	 		const * c = (int const *) &a; //explicit type qualifier cast
	
	int 		const * d = &a; 	//implicit promotion ->iok
	int 		*e = d;				//implicit demotion ->fuck no!
	int *		f = (int *)d;		//exlicit demotion -> ok, i obey

	return (0);
}