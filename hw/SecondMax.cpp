#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    //integer declarations
    int input;
    int max;
    int max_2 = 0;

    cin >> input;
    //start with the first input as max for later comparisons
    max = input;
    //only terminates if input is 0
    while (input != 0) {
        cin >> input;
        //reassigns max if input is greater
        if (input > max) {
            max_2 = max;
            max = input;
        } else if (input > max_2) {
            max_2 = input;
        }
    }
    //checks conditions for undefined
    if (max == 0) {
        cout << "Max: undefined" << endl << "2nd Max: undefined" << endl;
    } else if (max_2 == 0 && max != 0) {
        cout << "Max: " << max << endl << "2nd Max: undefined" << endl;
    } else if (max != 0 && max_2 != 0) {
        cout << "Max: " << max << endl << "2nd Max: " << max_2 << endl;
    }

    return 0;
}
