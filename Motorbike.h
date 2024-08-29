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
    double reduction = 0.15;
public:
    Motorbike(int ID):Vehicle(ID){};
    double getParkingDuration();
};

#endif