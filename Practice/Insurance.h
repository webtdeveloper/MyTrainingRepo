#ifndef INSURANCE_H
#define INSURANCE_H

#include<iostream>
#include"InsuranceType.h"
class Insurance
{
private:
    /* data */
    std::string _InsuranceId;
    float _InsuraceAmount;
    InsuranceType _Instype;
public:
    Insurance(/* args */) {}
    Insurance(std::string InsuranceId,float InsuraceAmount,InsuranceType Instype);
    ~Insurance() {}

//getter and setters
    std::string insuranceId() const { return _InsuranceId; }

    float insuraceAmount() const { return _InsuraceAmount; }

    InsuranceType instype() const { return _Instype; }
};
std::string DisplayInsuranceEnum(InsuranceType _type);

#endif // INSURANCE_H
