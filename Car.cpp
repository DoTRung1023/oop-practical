#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

double Car::getParkingDuration(){
    return (std::time(0) - getTime())*reduction;
}