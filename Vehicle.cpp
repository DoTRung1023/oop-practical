#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

Vehicle::Vehicle(){
    timeOfEntry = std::time(0);
    ID = 0;
}

Vehicle::Vehicle(int ID){
    timeOfEntry = std::time(0);
    this->ID = ID;
}

void Vehicle::set_ID(int ID) {
    this->ID = ID;
}
int Vehicle::get_ID(){
    return ID;
}

time_t Vehicle::getTime(){
    return timeOfEntry;
}

int Vehicle::getParkingDuration() {
    return std::time(nullptr)-getTime();
}