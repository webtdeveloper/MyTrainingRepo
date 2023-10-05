#include <iostream>
#include <list>
#include <vector>

//alias for data type
using ls = std::list<std::string>;

template <typename T>
class Employee
{

    private:
        T _skills;
        std::string _id;
        float _age;

    public:
        Employee(T skills, std::string id, float age)
        : _skills(skills), _id(id), _age(age)
        {
        }
        
        ~Employee()
        {
            std::cout << "Employee with ID: " << _id << " is destroyed\n";
        }
};

int main(){
    ls skills = {"Coding", "AI", "Version Control"};
    Employee<ls>* e1 = new Employee<ls>(skills, "emp101", 28.4f);
}