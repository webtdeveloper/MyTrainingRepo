#include "Car.h"

Car::Car(std::string carChasisNumber, std::string carBrand, std::string carModel, CarCategory carCategory, float carPrice,
        int carSeatCount, int carFuelCapacity) 
    : _carChasisNumber(carChasisNumber), _carBrand(carBrand),  _carModel(carModel), _carCategory(carCategory),
     _carPrice(carPrice), _carSeatCount(carSeatCount), _carFuelCapacity(carFuelCapacity)
{
}

Car::Car(std::string carChasisNumber, std::string carModel, std::string carBrand, float carPrice) 
    : _carChasisNumber(carChasisNumber),  _carModel(carModel),  _carBrand(carBrand), _carPrice(carPrice)
{
}


std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carChasisNumber: " << rhs._carChasisNumber
       << " _carBrand: " << rhs._carBrand
       << " _carModel: " << rhs._carModel
       << " _carCategory: " << DisplayEnum(rhs._carCategory)
       << " _carPrice: " << rhs._carPrice
       << " _carSeatCount: " << rhs._carSeatCount
       << " _carFuelCapacity: " << rhs._carFuelCapacity;
    return os;
}

std::string DisplayEnum(const CarCategory value){
    if(value == CarCategory::SPORTS_HATCHBACK){
        return "SPORTS_HATCHBACK";
    }
    else if(value == CarCategory::SEDAN){
        return "SEDAN";
    }else{
        return "SUV";
    }
}





