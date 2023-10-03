#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<array>
#include<vector>
#include "Customer.h"

using CustomerContainer = std::array<Customer*,8>;

void CreateObjects(CustomerContainer &container);

std::vector<Customer*> CustomerTypeContainer(CustomerContainer &container, CustomerType _type);

std::vector<Customer*> CustomerCredit(CustomerContainer &container);

float AverageCredit(CustomerContainer &container, CustomerType _type);

#endif // FUNCTIONALITIES_H
