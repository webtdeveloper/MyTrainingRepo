#include <iostream>
#include "InsuranceType.h"
#include "Insurance.h"

class Insurance
{
    private:
        std:: string insuranceId;
        float insuranceAmount;
        InsuranceType ins_type;

    public:
        Insurance(){}

        Insurance(std::string id, float amt, InsuranceType instype){
            this->insuranceId = id;
            this->insuranceAmount = amt;
            this->ins_type =instype;
        }

        ~Insurance(){
            
        }
};
std::string DisplayInsuranceEnum(InsuranceType _type);

