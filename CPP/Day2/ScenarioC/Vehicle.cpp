#include "VehicleType.h"
#include "Vehicle.h"

#include <iostream>

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type, float price)
    :_id(id), _brand(brand), _type(type), _price(price)
{

}

Vehicle::Vehicle(std::string id, std::string brand, VehicleType type)
    :_id(id), _brand(brand), _type(type)
{

}

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
