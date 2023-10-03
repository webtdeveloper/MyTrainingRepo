#include "Car.h"

Car::Car(std::string id, std::string brand, VehicleType type, float price, CarType cType)
   : Vehicle(id, brand, type, price), _car_type(cType)
{
}

Car::Car(std::string id, std::string brand, VehicleType type, CarType cType)
   : Vehicle(id, brand, type), _car_type(cType)
{
}

float Car::CalculateTax()
{
    return 0.1f * price();
}

std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << static_cast<const Vehicle &>(rhs)
       << " CarType : " << DisplayCarEnum(rhs._car_type);
    return os;
}

std::string DisplayCarEnum(const CarType value){
   if(value == CarType::SEDAN){
      return "SEDAN";
   }
   else if(value ==CarType::HATCHBACK){
      return "HATCHBACK";
   }
   else{
      return "SUV";
   }
}
