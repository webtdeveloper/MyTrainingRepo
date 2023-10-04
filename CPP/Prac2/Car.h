#ifndef CAR_H
#define CAR_H

#include "CarCategory.h"
#include <iostream>

class Car
{
    private:
        std::string _carChasisNumber;
        std::string _carBrand;
        std::string _carModel;
        CarCategory _carCategory;
        float _carPrice;
        int _carSeatCount;
        int _carFuelCapacity;


    public:
        Car() = default;

        Car(
            std::string carChasisNumber,
            std::string carBrand,
            std::string carModel,
            CarCategory carCategory,
            float carPrice,
            int carSeatCount,
            int carFuelCapacity
        );

        Car(
            std::string carChasisNumber,
            std::string carModel,
            std::string carBrand,
            float carPrice
        );

        Car(const Car& obj) = default;


        ~Car() {
            std::cout << "Car " << _carChasisNumber << " Destroyed\n";
        }

        float operator+ (Car* c2){
            return this->carPrice() + c2->carPrice();
        }



        std::string carChasisNumber() const { return _carChasisNumber; }
        void setCarChasisNumber(const std::string &carChasisNumber) { _carChasisNumber = carChasisNumber; }

        std::string carBrand() const { return _carBrand; }
        void setCarBrand(const std::string &carBrand) { _carBrand = carBrand; }

        std::string carModel() const { return _carModel; }
        void setCarModel(const std::string &carModel) { _carModel = carModel; }

        CarCategory carCategory() const { return _carCategory; }
        void setCarCategory(const CarCategory &carCategory) { _carCategory = carCategory; }

        float carPrice() const { return _carPrice; }
        void setCarPrice(float carPrice) { _carPrice = carPrice; }

        int carFuelCapacity() const { return _carFuelCapacity; }
        void setCarFuelCapacity(int carFuelCapacity) { _carFuelCapacity = carFuelCapacity; }

        int carSeatCount() const { return _carSeatCount; }
        void setCarSeatCount(int carSeatCount) { _carSeatCount = carSeatCount; }

        friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

        
};

std::string DisplayEnum(const CarCategory value);

#endif // CAR_H
