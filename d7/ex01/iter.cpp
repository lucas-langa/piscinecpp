#include <iostream>

template <typename T , typename I, typename F>

void iter(T arr, I len, F fn) 
{
	unsigned int i = 0;
	while (i < len)
	{
		fn(arr[i]);
		i++;
	}
	return;
};

void disp(char n)
{
	std::cout << n << std::endl;
	return;
}

int main(void)
{
	char name[] = "some random text";
	iter<char [], unsigned int>(name, 4, disp);
	return (0);
}