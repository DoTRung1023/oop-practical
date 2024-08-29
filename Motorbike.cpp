#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

Motorbike::Motorbike(){
    ID = 0;
    reduction = 0.15;
}

Motorbike::Motorbike(int ID){
    this->ID = ID;
    reduction = 0.15;
}

double Motorbike::getParkingDuration(){
    return (std::time(NULL) - timeOfEntry)*reduction;
}
