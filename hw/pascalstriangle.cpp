#include <iostream>
using namespace std;

int main() {
    int arr[20][20];

    for (int r = 0; r < 20; r++) {
        for (int c = 0; c < 20; c++) {
            arr[r][c] = 0;
        }
    }

    for (int r = 0; r < 20; r++) {
        arr[r][0] = 1;
        arr[r][r] = 1;

        for (int c = 1; c < r; c++) {
            arr[r][c] = arr[r-1][c-1] + arr[r-1][c];
        }
    }

    for (int c = 0; c < 20; c++) {
        cout << arr[19][c] << ' ';
    }
    cout << endl;

    return 0;
}
