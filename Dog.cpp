#include "Pet.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

Dog::Dog(string n) : Pet(n)  {
}
void Dog::sound(){
cout << name << " barked" << endl;
}
