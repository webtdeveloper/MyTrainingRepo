#include "Functionalities.h"
#include "Vehicle.h"
#include "VehicleType.h"

#include <memory>


int main(){
    Vehicle* arr[3];
    CreateObjects(arr);

    for(int i = 0; i < 3; i++){
        std::cout<< "Data : " <<*arr[i]<<"\n";
    }

    std::cout<< "Average Price : " << AveragePrice(arr) <<"\n";

    MinPriceCarDetails(arr);

    MaxPriceCarDetails(arr);

    std::cout<< "Simple Tax : " << arr[0]->CalculateTax() << "\n";
    std::cout<< "Simple Tax : " << arr[1]->CalculateTax() << "\n";
    std::cout<< "Simple Tax : " << arr[2]->CalculateTax() << "\n";

    std::cout<< "User Tax : " << arr[0]->CalculateTax(0.15f) << "\n";
    std::cout<< "User Tax : " << arr[1]->CalculateTax(0.16f) << "\n";
    std::cout<< "User Tax : " << arr[2]->CalculateTax(0.18f) << "\n";

    std::cout<< "Central State Tax : " << arr[0]->CalculateTax(0.09f, .09f) << "\n";
    std::cout<< "Central State Tax : " << arr[1]->CalculateTax(0.09f, 0.09f) << "\n";
    std::cout<< "Central State Tax : " << arr[2]->CalculateTax(0.09f, 0.09f) << "\n";



    //std::unique_ptr<Vehicle> uptr;

}