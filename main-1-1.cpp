#include <iostream>

extern int sum_diagonal(int array[4][4]);

using namespace std;

int main() {
    int array[4][4] = {{2, 7, 8, 9},
                      {3, 5, 7, 5},
                      {6, 4, 1, 0},
                      {1, 9, 4, 2}};

    cout << "The diagonal sum is: " << sum_diagonal(array) << endl;

    return 0;
}