#include <iostream>
#include "Person.h"
#include <string>

using namespace std;

extern Person* createPersonArray(int);

int main(){
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;
    Person* PersonArray = createPersonArray(number);

    cout << "People are: " << endl;
    for (int i = 0; i<number; i++) {
        cout << "Name: " << PersonArray[i].name << "\tAage: " << PersonArray[i].age << endl;
    }

    delete[] PersonArray;

    return 0;
}