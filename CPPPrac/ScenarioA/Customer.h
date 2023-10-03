#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include "CustomerType.h"

class Customer
{
    private:
        int _customer_id;
        std::string _customer_name;
        CustomerType _customer_type;
        int _customer_store_credits;

    public:
        Customer(
            int customer_id,
            std::string customer_name,
            CustomerType customer_type,
            int customer_store_credits);

        Customer(Customer& obj) = default; //copy constructor
        
        ~Customer() {
            std::cout <<"Customer ID : " <<customerId()<<" destroyed.\n";
        }

        int customerId() const { return _customer_id; }
        void setCustomerId(int customer_id) { _customer_id = customer_id; }

        std::string customerName() const { return _customer_name; }
        void setCustomerName(const std::string &customer_name) { _customer_name = customer_name; }

        CustomerType customerType() const { return _customer_type; }
        void setCustomerType(const CustomerType &customer_type) { _customer_type = customer_type; }

        int customerStoreCredits() const { return _customer_store_credits; }
        void setCustomerStoreCredits(int customer_store_credits) { _customer_store_credits = customer_store_credits; }

        friend std::ostream &operator<<(std::ostream &os, const Customer &rhs); 
};

std::string DisplayCustomerEnum(CustomerType value);

#endif // CUSTOMER_H
