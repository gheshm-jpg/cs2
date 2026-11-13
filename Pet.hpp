#ifndef PET_HPP
#define PET_HPP

#include<string>

using namespace std;

//Pet.hpp

class Pet {
	protected:
	string name;
     
     public:
     Pet(string n);
     virtual void sound();
};

#endif
