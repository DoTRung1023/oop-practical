#include <iostream>

using namespace std;

double weighted_average(int array[], int n) {
    if (n<1) return 0;
    int count[n];
    double average = 0;
    double sum = 0;

    for (int i = 0; i<n; i++) {
        count[i] = 0;
        for (int j = 0; j<n; j++) {
            if (array[j] == array[i]) {
                count[i]++;
            }
        }
        sum += array[i]*count[i];
    }
    average = sum/n;
    return average;
}