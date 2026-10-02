#include <iostream>
using namespace std;

int main() {
    const int dsize = 4;
    int data[dsize] = {1,2,4,8};
    int x = 20;

    int index;
    cout << "Enter an index to set to zero: ";
    cin >> index;
        if ((cin.fail()) || !(index >= 0 && index <= (dsize - 1))) {
            cout << "Invalid index" << endl;
            return 0;
            }
    data[index] = 0;

    for (int i = 0; i < dsize; i++) {
        cout << "data[" << i << "]: " << data[i] << endl;
    }
    cout << "x: " << x << endl;

    return 0;
}
