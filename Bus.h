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
    double reduction;
public:
    Bus();
    Bus(int ID);
    double getParkingDuration();
};

#endif