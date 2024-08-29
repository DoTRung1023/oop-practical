#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include "ParkingLot.h"

using namespace std;

int main(){
    int parkNum = 0;
    cout << "Number of vehicles parked: ";
    cin >> parkNum;
    ParkingLot arrayParkinglot(parkNum);

    for(int i = 0; i<parkNum; i++) {
        string typeVehicle;
        int inputID;

        cout << "Enter type of vehicle: ";
        cin >> typeVehicle;

        cout << "Enter the vehicle ID: ";
        cin >> inputID;

        if(typeVehicle == "car") {
            Car* c = new Car(inputID);
            c->set_ID(inputID);
            arrayParkinglot.parkVehicle(c);
        }
        else if(typeVehicle == "bus") {
            Bus* b = new Bus(inputID);
            b->set_ID(inputID);
            arrayParkinglot.parkVehicle(b);
        }
        else if(typeVehicle == "motorbike") {
            Motorbike* m = new Motorbike(inputID);
            m->set_ID(inputID);
            arrayParkinglot.parkVehicle(m);
        }
    }
    int unparkID;
    cout << "Enter ID of a vehicle to unpark: ";
    cin >> unparkID;
    arrayParkinglot.unparkVehicle(unparkID);

    return 0;
}