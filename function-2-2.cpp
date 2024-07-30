#include <iostream>
#include <cmath>

using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal_num = 0;
    for (int i = 0; i<number_of_digits; i++) {
        decimal_num += pow(2, number_of_digits-1-i)*binary_digits[i];
    }
    return decimal_num;
}