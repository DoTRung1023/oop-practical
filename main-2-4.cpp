#include <iostream>

extern bool is_ascending(int array[], int n);

using namespace std;

int main() {
    // int numbers[7] = {1, 3, 5, 6, 7, 8, 9};
    // int numbers[7] = {2, 1, 4, 5, 7, 8, 9};
    // int numbers[7] = {0, 0, 1, 1, 1, 5, 7};
    int numbers[7] = {2, 2, 4, 5, 6, 7, 6};

    if (is_ascending(numbers, 7) == false) {
        cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }

    return 0;
}