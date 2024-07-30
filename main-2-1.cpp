#include <iostream>
#include <string>

extern void print_binary_str(std::string decimal_number);

using namespace std;

int main() {
    string decimal_number;

    cout << "Enter a number: ";
    cin >> decimal_number;

    print_binary_str(decimal_number);

    return 0;
}