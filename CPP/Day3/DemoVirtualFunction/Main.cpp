#include <iostream>

#include "Manager.h"
#include "Employee.h"
#include "Developr.h"

int main(){
    Employee* arr[3];

    arr[0] = new Employee();
    arr[1] = new Manager();
    arr[2] = new Developr();

    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();
    arr[2]->applyForLeaves();

    arr[0]->PayTax();
    arr[1]->PayTax();
    arr[2]->PayTax();

    arr[0]->Display();
    arr[1]->Display();
    arr[2]->Display();

    delete arr[0];
    delete arr[1];
    delete arr[2];


}