#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "Card.h"
#include "DebitCard.h"
#include "CreditCard.h"
#define SIZE 5

bool checkAllNull(Card* arr[SIZE]);


void CreateObjects(Card* arr[SIZE]);

void CallCalculateTaxOnCharge(Card* arr[SIZE]);

void MathcingCardType(Card* arr[SIZE], CardType type, Card** ans);

#endif // FUNCTIONALITIES_H
