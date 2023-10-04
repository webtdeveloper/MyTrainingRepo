#include "VehicleType.h"
#include "Vehicle.h"

#include <iostream>


std::ostream &operator<<(std::ostream &os, const Vehicle &rhs) {
    os << "ID : " << rhs._id
       << " Brand: " << rhs._brand
       << " Type: " << DisplayEnum(rhs._type)
       << " Price: " << rhs._price;
    return os;
}

std::string DisplayEnum(const VehicleType value)
{
    if(value == VehicleType::BIKE){
        return "BIKE";
    }
    else if(value == VehicleType::CAR){
        return "CAR";
    }
    else{
        return "OTHER";
    }
}

Vehicle::Vehicle(std::string id, std::string brand, float price, VehicleType type)
   : _id(id), 
{
}
