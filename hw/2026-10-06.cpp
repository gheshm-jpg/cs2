#include <iostream>
#include <string>

using namespace std;

string pad_left(string msg, int width){

string result = "";

    for (int i=0; i<width;i++){
        result += " ";
        }
        result += msg;
    return result;

}
string add_k(int dollars){

string result = "";

    if (dollars < 1000){
        result += "$";
        result += to_string(dollars);
    }
    else if (dollars % 1000 >= 0){
        result += "$";
        result += to_string(dollars/1000);
        result += "K";
    }
    return result;
}
int main(){

int dollars[] = {813, 1024, 14534, 21832, 241901};

    for (int i=0; i<5;i++){
    cout << "|" << pad_left(add_k(dollars[i]),8) << "|" << endl;
    }
    
return 0;
}
