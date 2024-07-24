#include <iostream>

extern void two_five_nine(int array[], int n);

using namespace std;

int main() {
    int numbers[26] = {2, 6, 5, 9, 4, 7, 8, 3, 4, 9, 6, 2, 3, 6, 2, 5, 8, 9, 0, 1, 8, 2, 3, 5, 6, 8};
    // int numbers[4] = {2, 5, 9, 9};

    two_five_nine(numbers, 26);

    return 0;
}