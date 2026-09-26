#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

int input;
int i = 0;
int j = i+1;
int max;
int max_2;

    while (input!=0){
        cin >> input;
        max = input;
        if (input > max){
            max_2 = max;
            max = input;
        }
        cout << max << endl;
        cout << max_2 << endl;
    }
//    if (i <=1){
//        cout << "Max: " <<  
}
