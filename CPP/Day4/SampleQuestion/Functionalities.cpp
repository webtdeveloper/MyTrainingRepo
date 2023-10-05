#include "Functionalities.h"
#include <iostream>

void CreateObjects(Employee* arr1[3], Project* arr2[3]){
    arr2[0] = new Project("Pr101", 50, 1200000.0f);
    arr1[0] = new Employee("Emp101", "Shubham", 500000.0f, Department::DEVELOPMENT, arr2[0]);

    arr2[1] = new Project("Pr102", 60, 1500000.0f);
    arr1[1] = new Employee("Emp102", "Manish", 700000.0f, Department::DEVELOPMENT, arr2[1]);

    arr2[2] = new Project("Pr103", 70, 1800000.0f);
    arr1[2] = new Employee("Emp103", "Ganesh", 800000.0f, Department::INTEGRATION, arr2[2]);
}

Employee* EmployeeWithHighestSalary(Employee* arr[3]){
    Employee* res;
    float max = 0;
    for(int i = 0; i < 3; i++){
        if(arr[i]->salary() > max){
            res = arr[i];
            max = arr[i]->salary();
        }
    }
    return res;
}

int CountEmployeeWithGivenDepartment(Employee* arr[3], Department type){
    int count = 0;
    for(int i = 0; i < 3; i++){
        if(arr[i]->dept() == type){
            count++;
        }
    }
    return count;
}

float AverageBudget(Project* arr[3]){
    float total;

    for(int i = 0; i < 3; i++){
        total += arr[i]->budget();
    }
    std::cout<<"|||| "<< total/3<<"\n";


    return total/3;
}