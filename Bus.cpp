#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Bus.h"

using namespace std;

double Bus::getParkingDuration(){
    return (std::time(0) - timeOfEntry)*reduction;
}