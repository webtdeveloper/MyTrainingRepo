#include "Functionalities.h"
#include "Vehicle.h"
#include "VehicleType.h"
#include "Car.h"
#include "Bike.h"
#include "BikeType.h"

void CreateObjects(Vehicle* garage[3]){
    garage[0] = new Car("v101", "Maruti", VehicleType::CAR, 900000.0f, CarType::HATCHBACK);
    garage[1] = new Bike("bk111", "Bajaj", VehicleType::BIKE,200000.0f, 23.0f, BikeType::COMMUTE );
    garage[2] = new Car("v103", "Toyota", VehicleType::CAR, 120000.0f, CarType::SUV);

    for(int i = 0; i < 3; i++){
        std::cout<< *(garage[i]) <<"\n";
    }
}

//Calculate AveragePrice
float AveragePrice(Vehicle *garage[3])
{
    float total = 0.0f;
    for(int i = 0; i < 3; i++){
        //total is added with the previos total and price value taken from address at i position
        total += ( garage[i] )->price();
    }
    return total/3;
}

//Call CalculateTax Function by each object
void CallCalculateTax(Vehicle* garage[3]){
    for(int i = 0; i < 3; i++){
        std::cout <<"Tax : "<< (garage[i])->CalculateTax() <<"\n";
    }
}

//Free all the Car's object
void FreeMemory(Vehicle* garage[3])
{
    for(int i = 0; i < 3; i++){
        delete garage[i];
    }
}

