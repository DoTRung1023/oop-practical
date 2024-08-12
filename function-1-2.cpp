#include <iostream>
#include "Person.h"

using namespace std;

PersonList createPersonList(int n) {
    PersonList list_of_people;
    list_of_people.numPeople = n;
    list_of_people.people = new Person[n]();
    for (int i = 0; i<n; i++) {
        list_of_people.people[i].name = "Jane Doe";
        list_of_people.people[i].age = 1;       
    }
    return list_of_people;
}