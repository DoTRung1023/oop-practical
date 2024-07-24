#include <iostream>

extern double array_mean(int array[], int n);

using namespace std;

int main() {
    int numbers[6] = {2, 7, 8, 9, 10, 1};

    cout << "The mean is: " << array_mean(numbers, 6) << endl;

    return 0;
}