#include "Functionalities.h"
#include <iostream>

int main(){
    Car* arr[6];

    CreateObjects(arr);

    // for(int i = 0; i < 6; i++){
    //     std::cout << *arr[i] <<"\n";
    // }

    //std::cout <<"Total Price : "<< *arr[0] + arr[1] <<"\n";

    // std::cout << "Average Fuel Capacity : " << FindAverageFuelCapacity(arr) <<"\n";

    //std::cout << "Number of Specific Car : " << FindCountOfGivenBrand(arr, CarCategory::SPORTS_HATCHBACK) <<"\n";

    FindBestPassengerCar(arr, CarCategory::SPORTS_HATCHBACK);
}