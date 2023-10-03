#include "Functionalities.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"

void CreateObjects(Car* container[3]){
    container[0] = new Car("v101", "Maruti", VehicleType::CAR, 900000.0f, CarType::HATCHBACK);
    container[1] = new Car("v102", "Honda", VehicleType::CAR, 1000000.0f, CarType::SEDAN);
    container[2] = new Car("v103", "Toyota", VehicleType::CAR, 1200000.0f, CarType::SUV);
}

//Calculate AveragePrice
float AveragePrice(Car *container[3])
{
    float total = 0.0f;
    for(int i = 0; i < 3; i++){
        //total is added with the previos total and price value taken from address at i position
        total += ( container[i] )->price();
    }
    return total/3;
}

//Call CalculateTax Function by each object
void CallCalculateTax(Car* container[3]){
    for(int i = 0; i < 3; i++){
        std::cout << (container[i])->CalculateTax() <<"\n";
    }
}

//Free all the Car's object
void FreeMemory(Car* container[3])
{
    for(int i = 0; i < 3; i++){
        delete container[i];
    }
}

