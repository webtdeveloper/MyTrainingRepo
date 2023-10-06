#include <iostream>
#include "Director.h"
#include "Employee.h"
#include "Manager.h"
#include "Executive.h"

int main(){

    Director* d1 = new Director(
        "D101",
        "Shubham",
        20,
        "Pune",
        2000000.0f
        );

    std::cout << "Director Object : ";
    std::cout << *d1 << "\n\n";

    std::cout << "ID from Employee : " << d1->id() <<"\n";
    std::cout << "Team Size from Manager Section : " << d1->teamSize() <<"\n";
    std::cout << "Location from Executive Section : " << d1->location() <<"\n";
    std::cout << "Location from Director Section : " << d1->budget() << "\n";

    std::cout <<"Calling CalculateTax inherited from Manager class : " << "\n";
    d1->Manager::CalculateTax();
    std::cout<<"\n";

    std::cout <<"Calling CalculateTax inherited from Executive class : " << "\n";
    d1->Executive::CalculateTax();
    std::cout<<"\n";

    std::cout <<"Calling CalculateTax inherited from Director class : " << "\n";
    d1->CalculateTax();
    std::cout<<"\n";

    delete d1;
}