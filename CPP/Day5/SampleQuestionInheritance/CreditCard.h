#ifndef CREDITCARD_H
#define CREDITCARD_H

#include "Card.h"
#include <iostream>

class CreditCard : public Card
{
    private:
        float _transaction_limit;

    public:
        CreditCard(
            int number,
            int cvv_number,
            CardType card_type,
            float annual_charge,
            int limit,
            float transaction_limit
        );

        float CalculateTaxOnCharge() override{
            return 0.0f;
        }

        ~CreditCard() {}

        float transactionLimit() const { return _transaction_limit; }

        friend std::ostream &operator<<(std::ostream &os, const CreditCard &rhs);
        
};

#endif // CREDITCARD_H
