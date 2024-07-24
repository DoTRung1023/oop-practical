#include <iostream> 

extern int median_array(int array[], int n);

using namespace std;

int main() {
    int numbers[7] = {1, 2, 3, 4, 3, 2, 1};
    // int numbers[10] = {1, 1, 2, 2, 3, 3, 2, 2, 1, 1};
    // int numbers[4] = {1, 3, 3, 1};
    // int numbers[7] = {1, 4, 4, 3, 4, 4, 1};

    cout << "The median is: " << median_array(numbers, 7) << endl;

    return 0;
}