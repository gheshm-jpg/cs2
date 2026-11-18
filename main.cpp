#include "Pet.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
#include <string>

int main (){

Pet mypet("roger");
mypet.sound();
Cat mycat("kitty");
Pet* c = &mycat;
c->sound();
Dog mydog("doggy");
Pet* arr[3] = {&mypet,&mycat,&mydog};
for (int i=0 ; i <3; i++){
    arr[i]->sound();
    }
return 0;
}
