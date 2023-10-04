#include <iostream>
#include "Vehicle.h"
#include "VehicleType.h"

int main(){
    Vehicle v1("v101", "Maruti", VehicleType::CAR, 200000.0f);
    Vehicle v2("v102", "Toyota", VehicleType::CAR, 500000.0f);

    Vehicle* v3 = new Vehicle("v103", "Mahindra", VehicleType::CAR, 400000.0f);
    Vehicle* v4 = new Vehicle("v104", "Kia", VehicleType::CAR, 500000.0f);

    std::cout<<"v1 + v2 : " << (v1 + v2) <<"\n";
    std::cout<<"v1 + v2 : " << (*v3) + (*v4) <<"\n";

    delete v3;
    delete v4;

}