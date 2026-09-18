#include <iostream>
using std::cout,std::cin,std::endl;

int input1;
int input2;

int main(){
    cin >> input1 >> input2;
    cout << "x + y =" << input1+input2 << endl;
    cout << "x - y =" << input1-input2 << endl;
    cout << "x / y =" << (float) input1/input2 << endl;
    return 0;
}
