#include <iostream>

using namespace std;

void two_five_nine(int array[], int n) {
    int num_twos = 0;
    int num_fives = 0;
    int num_nines = 0;
    for (int i = 1; i < n; i++) {
        switch (array[i]) {
            case 2:
                num_twos++;
            case 5:
                num_fives++;
            case 9:
                num_nines++;
        }
    }
    cout << "2:" << num_twos << ";5:" << num_fives << ";9:" << num_nines << endl;
    
}