#include <iostream>
#include "Insurance.cpp"

#include "VehicleType.h"
#include "Vehicle.h"

class Vehicle
{
    private:
        int vehicleId;
        int vehicleRegistration;
        VehicleType vehicleType;
        Insurance vehicleInsurancePlan;

    public:
        Vehicle() {

        }
        
        ~Vehicle() {

        }
};