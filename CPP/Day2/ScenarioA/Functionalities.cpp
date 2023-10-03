#include "Functionalities.h"
#include "Vehicle.h"
#include "Type.h"

void CreateObjects(Vehicle *container[3])
{

   //container's 0 index now holds the address of this object on the heap
   container[0] = new Vehicle("v101", "Maruti", Type::CAR, 900000.0f);
   container[1] = new Vehicle("v102", "Honda", Type::CAR, 1000000.0f);
   container[2] = new Vehicle("v103", "Toyota", Type::CAR, 1200000.0f);
   
}

/*
    Loop over all location of the array for each location's pointer access _price attribute add it total
*/

float AveragePrice(Vehicle *container[3])
{
    float total = 0.0f;

    for(int i = 0; i < 3; i++){
        //total is added with the previos total and price value taken from address at i position
        total += ( container[i] )->price();
    }

    return total/3;

}
