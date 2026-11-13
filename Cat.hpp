#ifndef CAT_HPP
#define CAT_HPP
#include "Pet.hpp"
#include<string>

using namespace std;

//Cat.hpp

class Cat: public Pet {
     
     public:
     Cat(string n);
     void sound();
};

#endif
