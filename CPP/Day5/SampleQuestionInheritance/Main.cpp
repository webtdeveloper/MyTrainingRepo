#include <iostream>
#include "Functionalities.h"

#define SIZE 5

int main(){
    Card* arr[SIZE] = {};

    CreateObjects(arr);

    std::cout << "Cards Data : \n";
    for(int i = 0; i < SIZE; i++){
        std::cout << *arr[i] <<"\n";
    }

    CallCalculateTaxOnCharge(arr);

    Card** ans;

    MathcingCardType(arr, CardType::MASTERCARD, ans);
}