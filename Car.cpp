#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

Car::Car(){
    ID = 0;
    reduction = 0.1;
}

Car::Car(int ID){
    this->ID = ID;
    reduction = 0.1;
}

double Car::getParkingDuration(){
    return (std::time(NULL) - timeOfEntry)*reduction;
}