#include "Functionalities.h"

void CreateObjects(Vehicle* container[3]){
    container[0] = new Vehicle("v101", "Maruti", 200000.0f, VehicleType::CAR);
    container[1] = new Vehicle("v102", "Honda", 500000.0f, VehicleType::CAR);
    container[2] = new Vehicle("v103", "Toyota", 900000.0f, VehicleType::CAR);

}

float AveragePrice(Vehicle* container[3]){
    float total = 0.0f;

    for(int i = 0; i < 3; i++){
        //total is added with the previos total and price value taken from address at i position
        total += ( container[i] )->price();
    }

    return total/3;
}

void MinPriceCarDetails(Vehicle* container[3]){
    Vehicle* result = container[0];

    float min = container[0]->price(); //min

    for(int i = 0; i < 3; i++){
        if(container[i]->price() < min){
            min = container[i]->price();
            result = container[i];
        }
    }

    std::cout << "Minimum Car Price Details : " << *result <<"\n";
}

void MaxPriceCarDetails(Vehicle* container[3]){
    Vehicle* result = container[0];

    float max = container[0]->price(); //min

    for(int i = 0; i < 3; i++){
        if(container[i]->price() > max){
            max = container[i]->price();
            result = container[i];
        }
    }

    std::cout << "Maximum Car Price Details : " << *result <<"\n";
}