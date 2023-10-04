#include "Employee.h"
#include "Manager.h"

int main(){
    Employee* arr[3];

    arr[0] = new Employee();
    arr[1] = new Manager();

    //Employee version of function called because applyForLeaves is non-virturl
    arr[0]->applyForLeaves();
    arr[1]->applyForLeaves();

    //version specific to the type of object called payTax is virtual
    arr[0]->payTax();
    arr[1]->payTax();

    //Employee version of function called because there is no Display in Child class Manager
    arr[0]->Display();
    arr[1]->Display();


    delete arr[0];
    delete arr[1];
}