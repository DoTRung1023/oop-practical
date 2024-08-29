#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

double Motorbike::getParkingDuration(){
    return difftime(std::time(nullptr), getTime())*0.85;
}
