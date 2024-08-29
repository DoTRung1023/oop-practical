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
            Vehicle* parkVehicle = new Car(inputID);
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
        else if(typeVehicle == "bus") {
            Vehicle* parkVehicle = new Bus(inputID);
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
        else if(typeVehicle == "motorbike") {
            Vehicle* parkVehicle = new Motorbike(inputID);
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
    }
    // int unparkNum = 1;
    // cout << "Enter number of vehicles you want to unpark: ";
    // cin >> unparkNum;

    // for(int i = 0; i<unparkNum; i++) {
        int unparkID;
        cout << "Enter ID of a vehicle to unpark: ";
        cin >> unparkID;
        arrayParkinglot.unparkVehicle(unparkID);
    // }

    return 0;
}