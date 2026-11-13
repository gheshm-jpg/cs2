#include "Pet.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>
using namespace std;
int main(){

Pet mypet("roger");
mypet.sound();
Cat mycat("idiot");
Dog mydog("stupid");
Pet* s[] = {&mycat, &mypet, &mydog};
for (int i=0; i<3; i++) {
s[i]->sound();
}
return 0;
}
