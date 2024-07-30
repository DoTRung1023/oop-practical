#include <iostream>

extern void print_summed(int array1[3][3],int array2[3][3]);

using namespace std;

int main() {
    int array1[3][3] = {{2, 7, 8},
                      {3, 5, 7},
                      {4, 6, 0}};

    int array2[3][3] = {{1, 4, 7},
                      {4, 0, 9},
                      {5, 7, 2}};

    print_summed(array1, array2); // two matrices need to be in the same size

    return 0;
}