#include "Functionalities.h"

void CreateObjects(Employee* arr[SIZE]){

    

    arr[0] = new Employee(
                    "Emp101",
                    "Shubham",
                    40000.0f,
                    Department::DEVELOPMENT, 
                    new Project("KAP", 40, 2000000.0f)
            );

    arr[1] = new Employee(
                    "Emp102",
                    "Manish",
                    50000.0f,
                    Department::DEVELOPMENT, 
                    new Project("AUTOSAR", 60, 7000000.0f)
            );

    arr[2] = new Employee(
                    "Emp103",
                    "Ganesh",
                    60000.0f,
                    Department::INTEGRATION, 
                    new Project("DCS", 50, 4000000.0f)
            );
}

bool CheckNull(Employee* arr[SIZE]){

    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            return false;
        }
    }
    return flag;
}

Employee* EmployeeWithHighestSalary(Employee* arr[SIZE]){

    if(CheckNull(arr)){
        throw std::runtime_error("Data is Empty");
    }

    Employee* result = arr[0];

    float max = arr[0]->salary();

    float currentSal = 0.0f;

    for(int i = 0; i < SIZE; i++){
        if(arr[i]->salary() > currentSal){
            result = arr[i];
            currentSal = arr[i]->salary();
        }
    }
    return result;
}

int CountEmployeeWithWithGivenDepartment(Employee* arr[SIZE], Department dept){

    if(CheckNull(arr)){
        throw std::runtime_error("Data is Empty");
    }

    int count = 0;
    for(int i = 0; i < SIZE; i++){
        if(arr[i]->dept() == dept){
            count++;
        }
    }
    return count;
}

float AverageBudget(Employee* arr[SIZE]){

    if(CheckNull(arr)){
        throw std::runtime_error("Data is Empty");
    }

    float total = 0.0f;

    for(int i = 0; i < SIZE; i++){
        total += arr[i]->project()->budget();
    }

    return total/3;

}

void FreeMemory(Employee* arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        delete arr[i];
    }
}