#include <string>

class   Quadruped { //can access name, run() and legs
    private:
        std::string     name; //only accessibe from a quadruped object
    protected:
        Leg     legs[4]; ///accessible from a quadruped or derived object
    public:
        void    run(); //accessile wherever
};

class Dog : public Quadruped //can access run() and legs
{
    
};

int     main() //can only access run
{

}