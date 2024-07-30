#include <iostream>

extern int is_identity(int array[10][10]);

using namespace std;

int main() {
    int array[10][10];
    // identity matrix
    // for (int i = 0; i<10; i++) {
    //     for (int j = 0; j<10; j++) {
    //         if (i==j) {
    //             array[i][j] = 1;
    //         }
    //         else {
    //             array[i][j] = 0;
    //         }
    //     }
    // }
    // not identity
    for (int i = 0; i<10; i++) {
        for (int j = 0; j<10; j++) {
            array[i][j] = i+j;
        }
    }

    cout << is_identity(array) << endl;

    return 0;
}