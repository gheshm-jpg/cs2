#ifndef DOG_HPP
#define DOG_HPP
#include "Pet.hpp"
#include <string>
#include <iostream>

using namespace std;

class Dog: public Pet {
    public:
    Dog(string n);
    void sound();

};
#endif
