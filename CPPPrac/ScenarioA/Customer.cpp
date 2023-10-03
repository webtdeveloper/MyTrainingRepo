#include "Customer.h"

Customer::Customer(int customer_id, std::string customer_name, CustomerType customer_type, int customer_store_credits)
   :_customer_id(customer_id), _customer_name(customer_name), _customer_type(customer_type), 
   _customer_store_credits(customer_store_credits)
{
}


std::ostream &operator<<(std::ostream &os, const Customer &rhs) {
    os << "Customer ID: " << rhs._customer_id
       << " Customer Name: " << rhs._customer_name
       << " Customer Type: " << DisplayCustomerEnum(rhs._customer_type)
       << " Customer Store Credits: " << rhs._customer_store_credits;
    return os;
}

std::string DisplayCustomerEnum(CustomerType value){
    if(value == CustomerType::PRIMIUM){
        return "PRIMIUM";
    }
    else if(value == CustomerType::REGULAR){
        return "REGULAR";
    }else{
        return "VIP";
    }
}