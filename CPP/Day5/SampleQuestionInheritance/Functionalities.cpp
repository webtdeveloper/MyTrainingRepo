#include "Functionalities.h"
#include <iostream>
#define SIZE 5

bool checkAllNull(Card* arr[SIZE]){
    bool flag = true;
    for(int i = 0; i < SIZE; i++){
        if(arr[i] != nullptr){
            flag = false;
        }
    }
    return flag;
}

void CreateObjects(Card* arr[SIZE]){
    arr[0] = new DebitCard(1001, 201, CardType::MASTERCARD, 20000.0f, 50000, CategoryType::PRIMIUM);
    arr[1] = new DebitCard(1002, 202, CardType::RUPAY, 40000.0f, 80000, CategoryType::SIGNATURE);
    arr[2] = new CreditCard(1003, 203, CardType::MASTERCARD, 30000.0f, 60000, 30000.0f);
    arr[3] = new CreditCard(1004, 204, CardType::VISA , 60000.0f, 100000, 40000.0f);
    arr[4] = new CreditCard(1005, 205, CardType::RUPAY, 80000.0f, 120000, 50000.0f);
}

void CallCalculateTaxOnCharge(Card* arr[SIZE]){
    for(int i = 0; i < SIZE; i++){
        std::cout << "Tax : " << arr[i]->CalculateTaxOnCharge() << "\n";
    }
}

void MathcingCardType(Card* arr[SIZE], CardType type, Card** ans){
    if(checkAllNull(arr)){
        throw std::runtime_error("Empty Value");
    }

    for(int i = 0; i < SIZE; i++){
        int it = 0;
        if(arr[i] == nullptr){
            continue;
        }

        if(arr[i]->cardType() == type){
            ans[it++] = arr[i];
        }
    }
}