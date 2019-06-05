#ifndef PONY_HPP
# define PONY_HPP

class Pony {
	private:
		std::string _name;
		std::string _breed;
		std::string _color;
		int _height;
		int _age;
	public:
		Pony( std::string name, std::string breed, std::string color, int height, int age );
		~Pony( void );
};

#endif