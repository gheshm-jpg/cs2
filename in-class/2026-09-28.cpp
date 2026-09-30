#include <iostream>

using namespace std;

int main(){
    int arr[4];
    int total = 0;
    int input;
    for (int i=0;i<4;i++){
        cin >> input;
        arr[i]=input;
        total+= arr[i]; 
        }
    cout << total/4.0 << endl;
    }
