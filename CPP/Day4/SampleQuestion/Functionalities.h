#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Employee.h"

/*
   A function to create 3 objects of Project in an arry. Also, create 3 objects of Employees in a separate
   array. Link one project to one Employee
   Input: 2 arrays (in one for Employees), (second for Project)
   Output: void
*/

void CreateObjects(Employee* arr1[3], Project* arr2[3]);

/*
   A function to return the pointer to the Employee with highest salary
*/

Employee* EmployeeWithHighestSalary(Employee* arr[3]);

/*
    A function to return the count of all Employees in the array whose _dept value matches with the
    second parameter passed to this function
*/

int CountEmployeeWithGivenDepartment(Employee* arr[3], Department type);

/*
   Find the average budget of all the Project
*/

float AverageBudget(Project* arr[3]);

#endif // FUNCTIONALITIES_H
