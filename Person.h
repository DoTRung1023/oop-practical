#include <iostream>
#include <string>

using namespace std;

#ifndef Person_h
#define Person_h

struct Person {
    std::string name;
    int age;
};

#endif

#ifndef PersonList_h
#define PersonList_h

struct PersonList {
    Person* people;
    int numPeople;
};

#endif

