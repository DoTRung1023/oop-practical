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
        int typeVehicle;
        int inputID;

        cout << "Enter type of vehicle(1-car   2-bus   3-motorbike): ";
        cin >> typeVehicle;

        cout << "Enter the vehicle ID: ";
        cin >> inputID;

        switch(typeVehicle) {
            case 1:
                Vehicle* parkVehicle = new Car(inputID);
                parkVehicle->set_ID(inputID);
                arrayParkinglot.parkVehicle(parkVehicle);
                break;
            case 2:
                Vehicle* parkVehicle = new Bus(inputID);
                parkVehicle->set_ID(inputID);
                arrayParkinglot.parkVehicle(parkVehicle);
                break;
            case 3:
                Vehicle* parkVehicle = new Motorbike(inputID);
                parkVehicle->set_ID(inputID);
                arrayParkinglot.parkVehicle(parkVehicle);
                break;
                }
        }
    int unparkID;
    cout << "Enter ID of a vehicle to unpark: ";
    cin >> unparkID;
    arrayParkinglot.unparkVehicle(unparkID);

    return 0;
}