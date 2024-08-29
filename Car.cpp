#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"

using namespace std;

int Car::getParkingDuration(){
    return (std::time(nullptr) - getTime())*0.9;
}