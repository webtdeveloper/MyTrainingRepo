#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include "VehicleType.h"

class Vehicle
{
    private:
        std::string _id;
        std::string _brand;
        float _price;
        VehicleType _type;

    public:
        //Default Constructor
        //Vehicle() = default;

        Vehicle(
            std::string id,
            std::string brand,
            float price,
            VehicleType type);

        Vehicle(const Vehicle& obj) = default; //default copy constructor

        ~Vehicle() {
            std::cout << "Vehicle with ID: "
            << _id
            <<" is destroyed\n";
        }

        //Function Overloading
        float CalculateTax();

        float CalculateTax(float tax_percentage);

        float CalculateTax(float cgst, float sgst);

        std::string id() const { return _id; }

        std::string brand() const { return _brand; }

        float price() const { return _price; }

        VehicleType type() const { return _type; }

        friend std::ostream &operator<<(std::ostream &os, const Vehicle &rhs);
};

std::string DisplayEnum(const VehicleType value);

#endif // VEHICLE_H
