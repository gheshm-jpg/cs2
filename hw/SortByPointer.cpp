#include <iostream>

using namespace std;

// swap the values at two addresses
void swap(int* a, int* b) {
    int store = *a;
    *a = *b;
    *b = store;
}

// return a pointer to the smallest element
int* find_min(int nums[], int length) {
    int* ret = nullptr;
    for (int i = 0; i < length; i++) {
        if (ret == nullptr or nums[i] < *ret) {
            ret = &nums[i];
        }
    }
    return ret;
}

int main() {
    int num;
    int arr[5];

    // read five integers into the array
    for (int i = 0; i < 5; i++) {
        cin >> num;
        arr[i] = num;
    }

    // place the smallest remaining element at the current position
    for (int i = 0; i < 4; i++) {
        swap(find_min(arr + i, 5 - i), &arr[i]);

        // print the array after each iteration
        cout << "After iteration " << i + 1 << ", the array is: ";
        for (int j = 0; j < 5; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

