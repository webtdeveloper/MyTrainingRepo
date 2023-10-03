/*
    A function to create the 3 object on the heap
*/


#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Vehicle.h"


/*
   Function to create 3 objects on the heap and 
   store their addresses in the container array
*/
void CreateObjects(Vehicle* container[3]);

/*
   function to find average of price values 
   of 3 objects in the cotainer array
*/
float AveragePrice(Vehicle* container[3]);

#endif // FUNCTIONALITIES_H
