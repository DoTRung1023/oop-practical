#include <iostream>

extern int num_count(int array[], int n, int number);

using namespace std;

int main() {
    int numbers[6] = {2, 7, 8, 9, 10, 1};

    cout << "The number of numbers is: " << num_count(numbers, 6, 1) << endl;

    return 0;
}