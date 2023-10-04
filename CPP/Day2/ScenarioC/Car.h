#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"
#include "CarType.h"
#include <ostream>


class Car : public Vehicle
{
    private:
        CarType _car_type;

    public:
        //4+1
        Car(std::string id, std::string brand, VehicleType type, float price, CarType cType);

        //3+1
        Car(std::string id, std::string brand, VehicleType type, CarType cType);

        float CalculateTax() override;

        ~Car() {
            std::cout<<"Car part of vehicle with ID: " <<id() <<" is deatroyed\n";
        }

        CarType carType() const { return _car_type; }

        friend std::ostream &operator<<(std::ostream &os, const Car &rhs);
};

std::string DisplayCarEnum(const CarType value);

#endif // CAR_H
