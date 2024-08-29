#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;


class ParkingLot
{
private:
    int maxVehicle;
    int currentNum;
    Vehicle** vehicles;
public:
    ParkingLot();
    ParkingLot(int maxVehicle);

    int getCount();
    int getMaxVehicle();

    void setMaxVehicle(int maxVehicle);

    void parkVehicle(Vehicle* vehicle);

    void unparkVehicle(int ID);

    int countOverstayingVehicles(int maxParkingDuration);

    ~ParkingLot();
};

#endif