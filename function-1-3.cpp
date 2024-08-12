#include <iostream>
#include "Person.h"

using namespace std;

PersonList deepCopyPersonList(PersonList pl) {
    PersonList new_list;

    new_list.numPeople = pl.numPeople;
    new_list.people = new Person[pl.numPeople];

    for (int i = 0; i<pl.numPeople; i++) {
        new_list.people[i].name = pl.people[i].name;
        new_list.people[i].age = pl.people[i].age;
    }
    return new_list;
}