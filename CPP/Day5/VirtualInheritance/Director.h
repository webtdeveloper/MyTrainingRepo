#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Employee.h"
#include "Manager.h"
#include "Executive.h"
#include <iostream>

/*
    In Multiple inheritance in CPP, the most derived class is responsible for instantiating
    the most base class/classes
*/

class Director : public Manager, public Executive
{
    private:
        float _budget;

    public:
        Director(std::string id, std::string name, int team_size, std::string location, 
        float budget)
         : Employee(id, name), Manager(team_size), Executive(location),
          _budget(budget)
        {
        }

        void CalculateTax(){
            std::cout << "Director pays 50% Tax\n";
        }

        ~Director() {
            std::cout << "Director Destroyed\n";
        }

        float budget() const { return _budget; }

        friend std::ostream &operator<<(std::ostream &os, const Director &rhs) {
            os << static_cast<const Manager &>(rhs)
               << static_cast<const Executive &>(rhs)
               << " _budget: " << rhs._budget;
            return os;
        }

        
};

#endif // DIRECTOR_H
