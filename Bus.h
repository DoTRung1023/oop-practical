#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

#ifndef BUS_H
#define BUS_H

class Bus: public Vehicle
{
private:
public:
    Bus(int ID):Vehicle(ID){};
    double getParkingDuration();
};

#endif