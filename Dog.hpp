#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include <string>
#include "Pet.hpp"

using namespace std;

class Dog : public Pet {
    public:
    Dog(string name);
    void sound();
    };

#endif
