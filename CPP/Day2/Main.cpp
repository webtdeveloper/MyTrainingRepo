#include "Vehicle.h"
#include "Type.h"

#include "Functionalities.h"

/*
    A. Deceloper makes a container of objects. Container is copied when create object is called from 
    CreateObjects function to main function

    B. User creates an empty container. User passed its reference to the function developer accesses this 
    reference puts 
*/

int main(){
    Vehicle* arr[3];
    CreateObjects(arr);
    std::cout << "Average Price : " << AveragePrice(arr)<<"\n";
}