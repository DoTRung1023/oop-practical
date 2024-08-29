#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Motorbike.h"

using namespace std;

int Motorbike::getParkingDuration(){
    return (std::time(nullptr)- getTime())*0.85;
}
