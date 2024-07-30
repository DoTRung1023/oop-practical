#include <iostream>

extern int sum_if_palindrome(int integers[], int length);

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

    cout << "The sum is: " << sum_if_palindrome(integers, length) << endl;

    delete[] integers;

    return 0;
}