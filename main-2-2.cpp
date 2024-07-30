#include <iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

using namespace std;

int main() {
    int number_of_digits;

    cout << "Enter length of the binary: ";
    cin >> number_of_digits;

    int* binary_digits = new int[number_of_digits];

    for (int i = 0; i<number_of_digits; i++) {
        cout << "Enter #" << i+1 <<" number: ";
        cin >> binary_digits[i];
    }

    cout << binary_to_int(binary_digits, number_of_digits) << endl;

    delete[] binary_digits;

    return 0;
}