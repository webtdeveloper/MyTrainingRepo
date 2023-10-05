#include <iostream>
#include <list>
#include <vector>

//alias 
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

        template <typename A>
        friend std::ostream &operator<<(std::ostream &os, const Employee<A> &rhs) {
            os << "_skills: ";
            for(std::string element : rhs._skills){
                os << element <<" ";
            }
            
            os   << " _id: " << rhs._id
               << " _age: " << rhs._age;
            return os;
        }
};



int main(){
    ls skills = {"Coding", "AI", "Version Control"};
    //object of class Employee of list of strings
    Employee<ls>* e1 = new Employee<ls>(skills, "emp101", 28.4f);
    std::cout<<*e1<<"\n";
}


