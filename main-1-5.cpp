#include <iostream>

extern int count_evens(int number);

using namespace std;

int main() {
    int number = 29;

    cout << "Number of even numbers is: " << count_evens(number) << endl;

    return 0;
}