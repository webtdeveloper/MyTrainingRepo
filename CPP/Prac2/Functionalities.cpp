#include "Functionalities.h"
#include <iostream>

void CreateObjects(Car* arr[6]){
    arr[0] = new Car("CH101", "Maruti", "MR-101", CarCategory::SPORTS_HATCHBACK, 500000.0f, 4, 20);
    arr[1] = new Car("CH102", "Maruti", "MR-107", CarCategory::SPORTS_HATCHBACK, 700000.0f, 5, 40);
    arr[2] = new Car("CH103", "Toyota", "TY-101", CarCategory::SPORTS_HATCHBACK, 800000.0f, 6, 60);
    arr[3] = new Car("CH104", "Toyota", "TY-107", CarCategory::SEDAN, 400000.0f, 4, 20);
    arr[4] = new Car("CH105", "Mahindra", "MD-105", CarCategory::SEDAN, 300000.0f, 4, 40);
    arr[5] = new Car("CH106", "Mahindra", "MD-109", CarCategory::SUV, 900000.0f, 7, 20);
}

float FindAverageFuelCapacity(Car* arr[6]){

    float result = 0;
    for(int i = 0; i < 6; i++){
        result += arr[i]->carFuelCapacity();
    }

    return result/6;
}

int FindCountOfGivenBrand(Car* arr[6], CarCategory type){
    int res = 0;
    for(int i = 0; i < 6; i++){
        if(type == arr[i]->carCategory()){
            res++;
        }
    }
    return res;
}

void FindBestPassengerCar(Car* arr[6], CarCategory type){
    Car* res;
    int max = 0;
    for(int i = 0; i < 6; i++){
        if(type == arr[i]->carCategory() && max < arr[i]->carSeatCount()){
            max = arr[i]->carSeatCount();
            res = arr[i];
        }
    }

    std::cout<<"Brand : " << res->carBrand()<< " Model : "<< res->carModel() <<"\n";

}