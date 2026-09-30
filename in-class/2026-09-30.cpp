#include <iostream>
using namespace std;

int main() {
    int offset = 32;
    char input;
    char output;

    cin >> input;

    while (input != '=') {
        output = input;

        if (input >= 'a' && input <= 'z') {
            output = input - offset;
        }

        cout << output;
        cin >> input;
    }

    cout << endl;
    return 0;
}
