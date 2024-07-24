#include <iostream>

extern int min_element(int array[], int n);

using namespace std;

int main() {
    int numbers[9] = {3, 18, 25, 67, 33, 8, 9, 7, 24};

    cout << "The min is: " << min_element(numbers, 9) << endl;

    return 0;
}