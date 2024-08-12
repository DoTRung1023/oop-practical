#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList createPersonList(int);


int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    PersonList list_of_people = createPersonList(number);

    cout << "People are: " << endl;
    for (int i = 0; i<number; i++) {
        cout << "Name: " << list_of_people.people[i].name << "\tAage: " << list_of_people.people[i].age << endl;
    }
    cout << "numPeople: " << list_of_people.numPeople << endl;  

    delete[] list_of_people.people;

    return 0;
}