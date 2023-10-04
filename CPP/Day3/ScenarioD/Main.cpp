#include "Functionalities.h"
#include "Vehicle.h"
#include "VehicleType.h"


int main(){
    Vehicle* arr[3];
    CreateObjects(arr);

    for(int i = 0; i < 3; i++){
        std::cout<< "Data : " <<*arr[i]<<"\n";
    }

    std::cout<< "Average Price : " << AveragePrice(arr) <<"\n";

    MinPriceCarDetails(arr);

    MaxPriceCarDetails(arr);

}