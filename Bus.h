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
    double reduction = 0.25;
public:
    Bus(int ID):Vehicle(ID){};
    double getParkingDuration();
};

#endif