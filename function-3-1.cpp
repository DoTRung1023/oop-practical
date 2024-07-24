#include <iostream> 

using namespace std;

bool is_fanarray(int array[], int n) {
    if (n < 1) return false;
    for (int i = 0; i<n/2; i++) {
        if (array[i] != array[n-i-1]) {
            return false;
        }
        if (i > 0 && array[i] <= array[i-1]) {
            return false;
        }
    }
    if (n%2 == 1 && n > 1 && array[n/2] <= array[n/2-1]) {
        return false;
    }
    return true;
}