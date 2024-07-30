#include <iostream>

extern int sum_min_max(int integers[], int length);

using namespace std;

int main() {
    int length;

    cout << "Enter length of the array: ";
    cin >> length;

    if (length < 0) {
        length = 0;
    }
    int* integers = new int[length];

    for (int i = 0; i<length; i++) {
        cout << "Enter #" << i+1 << " number: ";
        cin >> integers[i];
    }

    cout << "Sum of min and max is: " << sum_min_max(integers, length) << endl;

    delete[] integers;

    return 0;
}