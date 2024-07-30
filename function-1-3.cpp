#include <iostream>

using namespace std;

void count_digits(int array[4][4]) {
    int count[10] = {0};
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            count[array[i][j]-1]++;
        }
    }
    for (int i = 0; i < 9; i++) {
        cout << i+1 << ":" << count[i] << ";";
    }
    cout << "\n";
}