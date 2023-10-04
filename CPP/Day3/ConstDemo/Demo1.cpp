# include "/workspaces/MyTrainingRepo/CPP/Day3/ScenarioD/Vehicle.h"

#include <iostream>

/*
   use case 1 : with variables of primitive types which are not pointers
*/

void Demo(){
    const int n1 = 10;
    const char grade = 'A';

    std::cout << n1 <<"\t" << grade << "\n";

    //since n1 is immutable (constant), it cannot be changed once initialized
    //n1 = 20;

    //since grade is immutable (constant), it cannot be changed once initialized
    //grade = 'B';

}

int main(){
    Demo();
}