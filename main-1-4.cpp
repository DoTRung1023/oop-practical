#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

using namespace std;

int main() {
    int numbers1[6] = {2, 7, 8, 9, 10, 1};
    int numbers2[6] = {5, 9, 11, 67, 3, 8};

    cout << "The sum is: " << sum_two_arrays(numbers1, numbers2, 6) << endl;

    return 0;
}