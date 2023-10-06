#ifndef DEBITCARD_H
#define DEBITCARD_H

#include "Card.h"
#include <iostream>
#include "CategaoryType.h"

class DebitCard : public Card
{
    private:
        CategoryType _category;
        
    public:

        DebitCard(
            int number,
            int cvv_number,
            CardType card_type,
            float annual_charge,
            int limit,
            CategoryType category
        );

        float CalculateTaxOnCharge() override{
            return 0.0f;
        }


        ~DebitCard() {}

        CategoryType category() const { return _category; }

        friend std::ostream &operator<<(std::ostream &os, const DebitCard &rhs);

};

std::string DisplayCategory(const CategoryType value);

#endif // DEBITCARD_H
