#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"

using namespace std;

#ifndef CAR_H
#define CAR_H

class Car: public Vehicle
{
private:
    double reduction;
public:
    Car();
    Car(int ID);
    double getParkingDuration();
};

#endif 