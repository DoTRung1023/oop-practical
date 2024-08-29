#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

double Motorbike::getParkingDuration(){
    return (std::time(0) - getTime())*reduction;
}
