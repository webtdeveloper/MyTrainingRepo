#include "Bike.h"

Bike::Bike(std::string id, std::string brand, VehicleType type, float price, float mileage, BikeType btype)
   : Vehicle(id, brand, type, price), _bike_mileage(mileage), _bike_type(btype)
{
}

Bike::Bike(std::string id, std::string brand, VehicleType type, float mileage, BikeType btype)
   : Vehicle(id, brand, type), _bike_mileage(mileage), _bike_type(btype)
{
}

std::ostream &operator<<(std::ostream &os, const Bike &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " Bike Mileage: " << rhs._bike_mileage
       << " Bike Type: " << DisplayBikeEnum(rhs._bike_type);
    return os;
}

std::string DisplayBikeEnum(const BikeType value){
   if(value == BikeType::ATV){
      return "ATV";
   }
   else if(value == BikeType::COMMUTE){
      return "COMMUTE";
   }
   else{
      return "SPORTS";
   }
}

float Bike::CalculateTax(){
    return 0.05f * price();
}
