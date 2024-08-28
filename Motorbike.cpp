#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(){
    Vehicle(0);
    reduction = 0.15;
}

Motorbike::Motorbike(int ID){
    Vehicle(ID);
    reduction = 0.15;
}

double Motorbike::getParkingDuration(){
    return (std::time(nullptr) - timeOfEntry)*reduction;
}
