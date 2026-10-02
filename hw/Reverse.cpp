#include <iostream>

using std::cout, std::cin, std::endl;

int main() {
    char array[100];
    cin.get(array, 100);
    char reversedarray[100];

    for (int i = 0; i < 100; i++) {
        if (array[i] == '\0') {
            int k = 0;

            // start before the null terminator so it is not copied first
            for (int j = i - 1; j >= 0; j--) {
                reversedarray[k] = array[j];
                k++;
            }

            // tells cout where the reversed text ends
            reversedarray[k] = '\0';

            cout << reversedarray << endl;

            // i is the number of characters before the null terminator
            cout << i << endl;
            break;
        }
    }

    return 0;
}


