#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

#ifndef MOTORBIKE_H
#define MOTORBIKE_H

class Motorbike: public Vehicle
{
private:
    double reduction;
public:
    Motorbike();
    Motorbike(int ID);
    double getParkingDuration();
};

#endif