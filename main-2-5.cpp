#include <iostream>

extern bool is_descending(int array[], int n);

using namespace std;

int main() {
    int numbers[7] = {9, 7, 5, 3, 1, 2, 0};
    // int numbers[7] = {9, 9, 8, 7, 4, 3, 2};
    // int numbers[7] = {9, 8, 8, 8, 7, 6, 3};

    if (is_descending(numbers, 7) == false) {
        cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }

    return 0;
}