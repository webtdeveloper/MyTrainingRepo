#include "Car.h"
#include "Functionalities.h"

int main(){
    Car* arr[3];
    CreateObjects(arr);
    std::cout << "Average Price : " << AveragePrice(arr)<<"\n";
    CallCalculateTax(arr);
    FreeMemory(arr);
}