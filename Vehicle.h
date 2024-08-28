#include <iostream>
#include <string>
#include <ctime>

using namespace std;

#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle
{
private:
    int ID;
protected:
    std::time_t timeOfEntry;
public:
    Vehicle();
    Vehicle(int ID);
    void set_ID(int ID);
    int get_ID();
    double virtual getParkingDuration();
};

#endif