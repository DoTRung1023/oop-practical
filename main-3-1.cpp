#include <iostream> 

extern bool is_fanarray(int array[], int n);

using namespace std;

int main() {
    // int numbers[7] = {1, 2, 3, 4, 3, 2, 1};
    // int numbers[10] = {1, 1, 2, 2, 3, 3, 2, 2, 1, 1};
    // int numbers[4] = {1, 3, 3, 1};
    int numbers[7] = {1, 4, 4, 3, 4, 4, 1};

    if (is_fanarray(numbers, 7) == false) {
        cout << "false" << endl;
    }
    else {
        cout << "true" << endl;
    }

    return 0;
}