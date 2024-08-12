#include <iostream>
#include "Person.h"

using namespace std;

extern PersonList shallowCopyPersonList(PersonList);

int main() {
    int number = 0;
    cout << "Enter a number: ";
    cin >> number;

    PersonList list_of_people;
    list_of_people.numPeople = number;

    list_of_people.people = new Person[number];

    for(int i = 0; i<number; i++) {
        cout << "Enter the #" << i+1 << " name: ";
        cin >> list_of_people.people[i].name;
        cout << "Enter the #" << i+1 << " age: ";
        cin >> list_of_people.people[i].age;
    }

    PersonList new_list = shallowCopyPersonList(list_of_people);

    cout << "People are: " << endl;
    for (int i = 0; i<number; i++) {
        cout << "Name: " << new_list.people[i].name << "\tAage: " << new_list.people[i].age << endl;
    }
    cout << "numPeople: " << new_list.numPeople << endl;  

    delete[] list_of_people.people;

    return 0;
}