#include <iostream>

#include "Department.h"

class Student
{
    private:
        int _roll_number;
        std::string _name;
        float _fees;
        char _grade;
        Department _dept; //IT, CS, AI_ML

    public:
        // Default Constructor
        Student() = default;
        
        //Parameterized Constructor
        Student(
            int rnum,
            std:: string name,
            float fees,
            char grade,
            Department dept
        ){
            this->_roll_number = rnum;
            this->_name = name;
            this->_fees = fees;
            this->_grade = grade;
            this->_dept = dept;
        }

        //Destructor
        ~Student() {
            std::cout << "Student with roll number : "
                      << this->_roll_number
                      << " is now destroyed\n";
        }

};

int main(){
    
    //stack
    Student s1(101, "Shubham", 45000.0f, 'A', Department::CS);
    Student s3(103, "Ganesh", 45000.0f, 'A', Department::CS);

    //heap
    Student* s2 = new Student(102, "Manish", 45000.0f, 'A', Department::IT);
    Student* s4 = new Student(104, "Sandeep", 45000.0f, 'A', Department::IT);
    delete s2;
    delete s4;

    //Array of stack allocated Student objects
    Student arr[2] = {s1, s3};

    //Array of heap allocated Student objects
    Student* heapArr[2] = {s2, s4};



}