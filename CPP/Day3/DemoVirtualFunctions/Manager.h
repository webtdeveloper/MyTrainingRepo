#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include<iostream>

class Manager : public Employee
{
    private:

    public:

        Manager() = default;

        void applyForLeaves()
        {
            std::cout << "Manager applies for leave on\n";
        }

        void payTax()
        {
            std::cout << "Manager pays 10% of salary\n";
        }

        // void Display()
        // {
        //     std::cout << "Manager Display called\n";
        // }

        ~Manager()
        {
            std::cout << "Manager Destroyed\n";
        }
};

#endif // MANAGER_H
