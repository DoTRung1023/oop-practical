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
    Parkinglot arrayParkinglot(10);

    for(int i = 0; i<10; i++) {
        string typeVehicle;
        int inputID;

        cout << "Enter type of vehicle: ";
        cin >> typeVehicle;

        cout << "Enter the vehicle ID: ";
        cin >> inputID;

        if(typeVehicle == "car") {
            Vehicle* parkVehicle = new Car;
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
        else if(typeVehicle == "bus") {
            Vehicle* parkVehicle = new Bus;
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
        else if(typeVehicle == "motorbike") {
            Vehicle* parkVehicle = new Motorbike;
            parkVehicle->set_ID(inputID);
            arrayParkinglot.parkVehicle(parkVehicle);
        }
    }
    cout << "Number of vehicles overstaying in the parking lot is: " 
         << arrayParkinglot.countOverstayingVehicles(15) << endl;

    return 0;
}