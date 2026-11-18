#include "Pet.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

using namespace std;

Dog::Dog(string name) : Pet(name) {
}
void Dog::sound(){
    cout << name << " barked" << endl;
    }
