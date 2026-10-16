#include <iostream>
using std::cout, std::cin, std::endl;

void count_stars(char input[], int* a, int* b, int* c);

int main() {
    char buffer[99];
    cin >> buffer; // safe because we know the type of input to expect
    int a, b, c;
    count_stars(buffer, &a, &b, &c);
    cout << a << " " << b << " " << c << endl;
    return 0;
}

void count_stars(char input[], int* a, int* b, int* c){
*a = 0;
*b = 0;
*c = 0;
    for (int i=0; input[i]!='|' ;i++){
       *a+=1;
       }
    for (int i=*a+1; input[i]!='|' ;i++){
       *b+=1;
       }
    for (int i=*a+*b+2; input[i]!='\0' ;i++){
       *c+=1;
       }



}
