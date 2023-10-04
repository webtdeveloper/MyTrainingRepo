#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
    private:
        std::string _id;
        std::string _brand;
        VehicleType _type;
        float _price;

    public:
        Vehicle(std::string id, std::string brand, VehicleType type, float price)
            : _id(id), _brand(brand), _type(type), _price(price)
        {
        }

        // Vehicle(
        //     std::string id,
        //     std::string brand,
        //     VehicleType type
        // );

        Vehicle(const Vehicle& obj) = default;

        //Define a abstract method or pure virtual function
        //float CalculateTax() = 0;

        ~Vehicle() {
            std::cout <<" Object with ID: " <<_id <<" is destroyed\n";
        }

        //v1 + v2
        //function (Operator Overloading)
        float operator+ (Vehicle v2){
            //current object's price PLUS passed object's price
            return this->price() + v2.price();
        }

        std::string id() const { return _id; }

        std::string brand() const { return _brand; }

        VehicleType type() const { return _type; }

        float price() const { return _price; }
        
}; 

#endif // VEHICLE_H
