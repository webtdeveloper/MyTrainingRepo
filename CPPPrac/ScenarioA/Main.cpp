#include <iostream>
#include "Functionalities.h"
#include "Customer.h"
#include<array>
#include <vector>

using CustomerContainer = std::array<Customer*,8>;

int main(){

    CustomerContainer container;
    CreateObjects(container);
    std::cout<<"Container Data : "<<std::endl;
    for(auto it: container)
    {
        std::cout << *it << std::endl;
    }


    std::cout<<"CustomerType Data : "<<std::endl;
    std::vector<Customer*> Typeresult =  CustomerTypeContainer(container, CustomerType::REGULAR);
    for(auto it: Typeresult)
    {
        std::cout << *it << std::endl;
    }

    std::cout<<"Customer Creadit Data : "<<std::endl;
    std::vector<Customer*> CustomerCreditResult = CustomerCredit(container);
    for(auto it: CustomerCreditResult)
    {
        std::cout << *it << std::endl;
    }

    std::cout << "Result Average of Specific CustomerType : " << std::endl;
    float res = AverageCredit(container, CustomerType::REGULAR);
    std::cout<<"Average : " << res << std::endl; 


    return 0;
}