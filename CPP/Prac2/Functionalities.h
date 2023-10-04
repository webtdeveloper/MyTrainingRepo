#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Car.h"

void CreateObjects(Car* arr[6]);

float FindAverageFuelCapacity(Car* arr[6]);

int FindCountOfGivenBrand(Car* arr[6], CarCategory type);

void FindBestPassengerCar(Car* arr[6], CarCategory type);

#endif // FUNCTIONALITIES_H
