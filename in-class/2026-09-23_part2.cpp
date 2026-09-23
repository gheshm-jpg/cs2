#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int a;
    int b;
    int c;
    float avg;
    cin >> a;
    cin >> b;
    cin >> c;
    int min = a;
    int max = a;
    if (b>max){
        max = b;
        }
    if (c>max){
        max=c;
        }
    if (b<min){
        min=b;
        }
    if (c<min){
        min=c;
        }
    avg = (a + b + c)/3.0;
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;
    cout << "Average: " << avg << endl;
    return 0;
}
