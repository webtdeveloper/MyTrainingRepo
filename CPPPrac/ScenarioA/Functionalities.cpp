#include "Functionalities.h"
#include "CustomerType.h"
#include "Customer.h"

#include<array>
#include<vector>

// Standard Array
using CustomerContainer = std::array<Customer*,8>;

//Create Customer object and store in container array
void CreateObjects(CustomerContainer& container){
    container[0] = new Customer(101, "Shubham", CustomerType::REGULAR, 140);
    container[1] = new Customer(102, "Manish", CustomerType::REGULAR, 180);
    container[2] = new Customer(103, "Ganesh", CustomerType::REGULAR, 190);
    container[3] = new Customer(104, "Sandeep", CustomerType::REGULAR, 240);
    container[4] = new Customer(105, "Niraj", CustomerType::PRIMIUM, 240);
    container[5] = new Customer(106, "Abhishek", CustomerType::PRIMIUM, 140);
    container[6] = new Customer(107, "Rahul", CustomerType::VIP, 540);
    container[7] = new Customer(108, "Prince", CustomerType::VIP, 340);
}


std::vector<Customer*> CustomerTypeContainer(CustomerContainer& container, CustomerType _type){
    std::vector<Customer*> res;
    for(int i = 0; i < 8; i++){
        if(container[i]->customerType() == _type){
            res.push_back(container[i]);
        }
    }
    return res;
}

std::vector<Customer*> CustomerCredit(CustomerContainer& container){
    std::vector<Customer*> res;
    for(int i = 0; i < 8; i++){
        if(container[i]->customerStoreCredits() >= 100 && container[i]->customerStoreCredits() <= 200){
            res.push_back(container[i]);
        }
    }
    return res;
}

float AverageCredit(CustomerContainer& container, CustomerType _type){
    float total = 0;
    int it = 0;
    for(int i = 0; i < 8; i++){
        if(container[i]->customerType() == _type){
            total += container[i]->customerStoreCredits();
            it++;
        }
    }

    if(it == 0){
        it = 1;
        return total/it;
    }

    return total/it;
}



