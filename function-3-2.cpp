#include <iostream> 

using namespace std;

int median_array(int array[], int n) {
    if (n%2==0 || n<1) {
        return 0;
    }
    int sort = 0;
    while (sort<n) {
        for (int i = 0; i<n-1-sort; i++) {
            if (array[i] > array[i+1]) {
                int temp = array[i];
                array[i] = array[i+1];
                array[i+1] = temp;
            }
        }
        sort++;
    }
    return array[n/2+1];
}