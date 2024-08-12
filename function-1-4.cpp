#include <iostream>
#include "Person.h"

using namespace std;

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList new_list;

    new_list.numPeople = pl.numPeople;
    new_list.people = pl.people;

    return new_list;
}