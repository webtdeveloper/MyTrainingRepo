#include "Functionalities.h"
#include <iostream>
#define SIZE 5

void CreateObjects(Card* arr[SIZE]){
    arr[0] = new DebitCard(1001, 201, CardType::MASTERCARD, 20000.0f, 50000, CategoryType::PRIMIUM);
    arr[1] = new DebitCard(1002, 202, CardType::RUPAY, 40000.0f, 80000, CategoryType::SIGNATURE);
    arr[2] = new CreditCard(1003, 203, CardType::MASTERCARD, 30000.0f, 60000, 30000.0f);
    arr[3] = new CreditCard(1004, 204, CardType::VISA , 60000.0f, 100000, 40000.0f);
    arr[4] = new CreditCard(1005, 205, CardType::RUPAY, 80000.0f, 120000, 50000.0f);
}