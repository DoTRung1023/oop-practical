#include <iostream>
#include <string>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

Parkinglot::Parkinglot() {
    maxVehicle = 0;
    currentNum = 0;
    vehicles = new Vehicle*[maxVehicle];
}
Parkinglot::Parkinglot(int maxVehicle){
    this->maxVehicle = maxVehicle;
    currentNum = 0;
    vehicles = new Vehicle*[maxVehicle];
}

int Parkinglot::getCount(){
    return currentNum;
}

int Parkinglot::getMaxVehicle() {
    return maxVehicle;
}

void Parkinglot::setMaxVehicle(int maxVehicle) {
    this->maxVehicle = maxVehicle;
}

void Parkinglot::parkVehicle(Vehicle* vehicle) {
    if (currentNum < maxVehicle) {
        vehicles[currentNum] = vehicle;
        currentNum++;
    }
    else {
        cout << "The lot is full" << endl;
    }
}

void Parkinglot::unparkVehicle(int ID) {
    int found = 0;
    for (int i = 0; i<currentNum; i++) {
        if(vehicles[i]->get_ID() == ID) {
            vehicles[i] = nullptr;
            found = 1;
            break;
        }
    }
    if(found == 0) {
        cout << "Vehicle not in the lot" << endl;
    }
}

int Parkinglot::countOverstayingVehicles(int maxParkingDuration){
    int exceed = 0;
    for(int i = 0; i<currentNum; i++) {
        if(vehicles[i]->getParkingDuration() > maxParkingDuration) {
            exceed++;
        }
    }
    return exceed;
}

Parkinglot::~Parkinglot(){
    for(int i = 0; i<currentNum; i++) {
        delete vehicles[i];
    }
    delete vehicles;
}