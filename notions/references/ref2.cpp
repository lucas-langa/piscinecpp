#include <iostream>
#include <string>

void    byPtr( std::string* str) {
    *str += " and ponies";
    return ;
}

void    byConstPtr( std::string const * str ) {
    std::cout << *str << std::endl;
    return ;
}

void    byRef( std::string& str ) {
    str += " and ponies";
    return ;
}

void    byConstRef( std::string const & str ) {
    std::cout << str << std::endl;
    return ;
}

int     main(void) {
    std::string str  = "i haven't seen a butterfly";

    std::cout << str << std::endl;
    byPtr( &str );
    byConstPtr( &str );

    str = "i haven't seen otters";

    std::cout << str << std::endl;
    byRef( str );
    byConstRef( str );

    return (0);
}