#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

double Bus::getParkingDuration(){
    return difftime(std::time(nullptr), getTime())*0.75;
}