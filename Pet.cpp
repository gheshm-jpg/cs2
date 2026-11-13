#include "Pet.hpp"
#include <string>
#include <iostream>
using namespace std;
Pet::Pet(string n) {
		name = n;
    }
    void Pet::sound() {
		cout << name << " made a sound" << endl;
    }
