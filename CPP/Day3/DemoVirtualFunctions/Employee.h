#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>

class Employee
{
    private:
        
    public:
    Employee()  = default;

    void applyForLeaves(){
        std::cout <<"Employee applies for leave on\n";
    }

    virtual void payTax(){
        std::cout<<"Employee pays 20% of salary\n";
    }

    virtual void Display(){
        std::cout << "Employee Display called\n";
    }

    virtual ~Employee() {
        std::cout<<"Employee Destroyed\n";
    }

};

#endif // EMPLOYEE_H
