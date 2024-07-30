#include <iostream>
#include <string>
#include <cmath>

using namespace std;

void print_binary_str(std::string decimal_number) {
    if (decimal_number == "0") {
        cout << "0" << endl;
    }
    int base10 = 0;
    int len_base10 = decimal_number.length();

    for (int i = len_base10-1; i>=0; i--) {
        int remain = (int) decimal_number[i] - '0';
        base10 += remain*pow(10,len_base10-i-1);
    }
    int length = 0;
    int temp_result[50] = {0};
    while (base10 > 0) {
        int remain = base10%2;
        temp_result[length] = remain;
        base10/=2;
        length++;
    }
    for (int i = length-1; i>=0; i--) {
        cout << temp_result[i];
    }
    cout << "\n";
}