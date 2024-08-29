#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

int Bus::getParkingDuration(){
    return (std::time(nullptr) - getTime())*0.75;
}