#include "Functionalities.h"
#define SIZE 3

int main(){
    //Employee* arr[SIZE] = {};

    //CreateObjects(arr);

    // for(int i = 0; i < 3; i++){
    //     std::cout <<"Employee Data : " << *arr[i] << "\n";
    // }

    // Employee* res = EmployeeWithHighestSalary(arr);
    // std::cout << "Highest Employee Data : " << *res <<"\n";

    // int result = CountEmployeeWithWithGivenDepartment(arr, Department::DEVELOPMENT);
    // std::cout << "Number of DEVELOPMENT Employee : " << result <<"\n";

    // float avg = AverageBudget(arr);
    // std::cout << "Average Budget of Project : " << avg <<"\n";

    Employee* arr[SIZE] = {};

    try{
        CreateObjects(arr);
        std::cout << "Average Budget of Project : " << AverageBudget(arr) <<"\n";
        std::cout << "Number of DEVELOPMENT Employee : " << 
        CountEmployeeWithWithGivenDepartment(arr, Department::DEVELOPMENT) <<"\n";
        std::cout << "Highest Employee Data : " << *(EmployeeWithHighestSalary(arr)) <<"\n";
    }catch(std::runtime_error& ex){
        std::cout << ex.what();
    }

    FreeMemory(arr);




}