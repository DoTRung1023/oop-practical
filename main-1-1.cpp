#include <iostream>

extern int array_sum(int array[], int n);

using namespace std;

int main() {
    int numbers[6] = {2, 7, 8, 9, 10, 0};

    cout << "The sum is: " << array_sum(numbers, 6) << endl;

    return 0;
}