#ifndef DEMP1_H
#define DEMP1_H

#include <iostream>

float Square(float number){
    return number * number;
}

float Cube(float number){
    return number * number * number;
}

int Factorial(int number){
    if(number < 0){
        throw std::runtime_error("Negative Number Problem");
    }

    else if(number == 1){
        return 1;
    }

    else{
        return number * Factorial(number-1);
    }
}

#endif // DEMP1_H
