#include <iostream>
#include <string>
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

using namespace std;

int main(){
    int totalVehicle = 0;

    cout << "Enter number of vehicles: ";
    cin >> totalVehicle;

    Vehicle** v = new Vehicle*[totalVehicle];

    for(int i = 0; i<totalVehicle; i++) {
        string typeVehicle;
        int inputID;

        cout << "Enter type of vehicle: ";
        cin >> typeVehicle;

        cout << "Enter the vehicle ID: ";
        cin >> inputID;

        if(typeVehicle == "car") {
            v[i] = new Car(inputID);
        }
        else if(typeVehicle == "bus") {
            v[i] = new Bus(inputID);
        }
        else if(typeVehicle == "motorbike") {
            v[i] = new Motorbike(inputID);
        }
    }

    for(int i = 0; i<totalVehicle; i++) {
        cout << "The vehicle ID " << v[i]->get_ID()
             << " has parking duration: " << v[i]->getParkingDuration() << endl;
    }

    for(int i = 0; i<totalVehicle; i++) {
        delete v[i];
    }
    delete[] v;

    return 0;
}