#include <iostream>
using namespace std;
int main() {
    char currency;
    int amount;
    char currency_wanted;
    float conv_rate;
    cout << "What currency do you have?" << endl;
    cin >> currency;
    cout << "How much " << currency << " do you have?" << endl;
    cin >> amount;
    cout << "What currency do you want?" << endl;
    cin >> currency_wanted;
    cout << "How many " << currency_wanted << " is one " << currency << " worth?" << endl;
    cin >> conv_rate;
    cout << amount << currency << " = " << amount * conv_rate << currency_wanted << endl;
    return 0;
}
