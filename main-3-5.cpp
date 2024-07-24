#include <iostream>

using namespace std;

extern double sum_even(double array[], int n);

int main() {
    // double numbers[9] = {3.4, 18.3, 25.65, 67.23, 33.9, 8.2912, 9.3, 7.5, 24};
    // double numbers[26] = {2, 6, 5, 9, 4, 7, 8, 3, 4, 9, 6, 2, 3, 6, 2, 5, 8, 9, 0, 1, 8, 2, 3, 5, 6, 8};
    double numbers[4] = {2, 5, 9, 9};

    cout << "The sum of numbers in even position is: " << sum_even(numbers, 4) << endl;

    return 0;
}
