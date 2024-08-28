#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

#ifndef PARKINGLOT_H
#define PARKINGLOT_H

class Parkinglot
{
private:
    int maxVehicle;
    int currentNum;
    Vehicle** vehicles;
public:
    Parkinglot();
    Parkinglot(int maxVehicle);

    int getCount();
    int getMaxVehicle();

    void setMaxVehicle(int maxVehicle);

    void parkVehicle(Vehicle* vehicle);

    void unparkVehicle(int ID);

    int countOverstayingVehicles(int maxParkingDuration);

    ~Parkinglot();
};

#endif