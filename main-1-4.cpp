#include <iostream>

extern void print_scaled(int array[3][3],int scale);

using namespace std;

int main() {
    int array[3][3] = {{2, 7, 8},
                      {3, 5, 7},
                      {4, 6, 0}};
    int scale = 4;

    print_scaled(array, scale);

    return 0;
}