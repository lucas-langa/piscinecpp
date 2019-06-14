#include <iostream>

template <typename T>

T min(T a, T b)
{
	return (a <= b ? a : b);
};

template <typename T>

T max(T c, T d)
{
	return (c >= d ? c : d);
};

template <typename T>

void swap(T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
	return;
};
/* 
int 	main(){
	int a = 2, b =9;
	swap<int&>(a, b);
	std::cout << a << " " << b << "\n";
	std::cout << min<int>(a ,b ) << "\n";
	std::cout << max<int>(a, b) << "\n";
	return (0);
}*/

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}