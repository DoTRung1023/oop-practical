#include <iostream>

using namespace std;

extern double weighted_average(int array[], int n);

int main() {
    // int numbers[7] = {1, 2, 3, 4, 3, 2, 1};
    // int numbers[10] = {1, 1, 2, 2, 3, 3, 2, 2, 1, 1};
    // int numbers[3] = {1, 3, 3};
    int numbers[7] = {1, 4, 4, 3, 4, 4, 1};

    cout << "The weighted average is: " << weighted_average(numbers, 7) << endl;

    return 0;
}