#include "Bike.h"

Bike::Bike(std::string id, std::string brand, VehicleType type, float price, float mileage, BikeType btype)
   : Vehicle(id, brand, type, price), _bike_mileage(mileage), _bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float mileage, BikeType btype)
   : Vehicle(id, brand, type), _bike_mileage(mileage), _bike_type(btype)
{
}

float Bike::CalculateTax(){
    return 0.05f * price();
}
