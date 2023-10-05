#include "Employee.h"
#define SIZE 3

void CreateObjects(Employee* arr[3]);

/*
    A function to check if all positions of the array are nullptr
*/

bool CheckNull(Employee* arr[SIZE]);

Employee* EmployeeWithHighestSalary(Employee* arr[SIZE]);

int CountEmployeeWithWithGivenDepartment(Employee* arr[SIZE], Department dept);

float AverageBudget(Employee* arr[SIZE]);

void FreeMemory(Employee* arr[SIZE]);