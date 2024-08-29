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
public:
    Car(int ID):Vehicle(ID){};
    double getParkingDuration();
};

#endif 