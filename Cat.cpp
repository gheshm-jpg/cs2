#include "Pet.hpp"
#include "Cat.hpp"
#include <string>
#include <iostream>
using namespace std;
Cat::Cat(string n) : Pet(n) {
    }
    void Cat::sound() {
		cout << name << " meowed" << endl;
    }
