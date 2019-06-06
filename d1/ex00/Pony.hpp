#ifndef PONY_HPP
# define PONY_HPP

class Pony {
	private:
		std::string _name;
		std::string _breed;
		std::string _color;
		float _height;
		int _age;
	public:
		Pony( std::string name, std::string breed, std::string color, float height, int age );
		~Pony( void );
		void entertain( void );
		std::string get_name( void ) const;
		std::string get_breed( void ) const;
		std::string get_color( void ) const;
		float get_height( void ) const;
		int get_age( void ) const;
};

#endif