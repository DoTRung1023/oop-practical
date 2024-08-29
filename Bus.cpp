#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

Bus::Bus(){
    ID = 0;
    reduction = 0.25;
}

Bus::Bus(int ID){
    this->ID = ID;
    reduction = 0.25;
}

double Bus::getParkingDuration(){
    return (std::time(nullptr) - timeOfEntry)*reduction;
}