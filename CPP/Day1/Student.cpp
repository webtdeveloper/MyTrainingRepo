#include <iostream>

#include "Department.h"
using string = std::string;

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

        friend std::ostream &operator<<(std::ostream &os, const Student &rhs);

};

string displayEnumDepartment(Department dept){
    
    if(dept == Department::AI_ML){
        return "AI_ML";
    }else if(dept == Department::CS){
        return "CS";
    }else{
        return "IT";
    }
}

int main(){
    
    //stack
    // Student s1(101, "Shubham", 45000.0f, 'A', Department::CS);
    // Student s3(103, "Ganesh", 45000.0f, 'A', Department::CS);

    //heap
    Student* s1 = new Student(101, "Manish", 45000.0f, 'A', Department::IT);
    Student* s2 = new Student(102, "Sandeep", 45000.0f, 'A', Department::IT);
    Student* s3 = new Student(103, "Shubham", 45000.0f, 'A', Department::CS);
    Student* s4 = new Student(104, "Ganesh", 45000.0f, 'A', Department::CS);
    Student* s5 = new Student(105, "Rahul", 45000.0f, 'A', Department::AI_ML);

    // std::cout << *s1 <<"\n";
    // std::cout << *s2 <<"\n";

    // std::cout << s3 <<"\n";
    // std::cout << *s4 <<"\n";

    //Array of stack allocated Student objects
    // Student arr[2] = {s1, s3};

    //Array of heap allocated Student objects

    Student* heapArr[5] = {s1, s2, s3, s4 , s5};

    for(auto it:heapArr)
    {
        std::cout<< *it <<"\n";
    }
    
    for(auto it:heapArr)
    {
        delete it;
    }

    //delete [] heapArr;

}

inline std::ostream &operator<<(std::ostream &os, const Student &rhs) {
    os << "Roll Number : " << rhs._roll_number
       << " Name : " << rhs._name
       << " Fees : " << rhs._fees
       << " Grade: " << rhs._grade
       << " Department: " << displayEnumDepartment(rhs._dept);
    return os;
}

