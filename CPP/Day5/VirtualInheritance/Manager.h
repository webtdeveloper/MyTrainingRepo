#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"
#include <iostream>

class Manager : virtual public Employee
{
    private:
        int _team_size;

    public:
        Manager(std::string id, std::string name, int team_size)
         : Employee(id, name), _team_size(team_size)
        {
        }

        virtual void CalculateTax() override{
            std::cout << "Manager Pays 20% Tax\n";
        }

        virtual ~Manager(){
            std::cout << "Manager Destroyed\n";
        }

        int teamSize() const { return _team_size; }

        friend std::ostream &operator<<(std::ostream &os, const Manager &rhs) {
            os << static_cast<const Employee &>(rhs)
               << " _team_size: " << rhs._team_size;
            return os;
        }

        
};

#endif // MANAGER_H
