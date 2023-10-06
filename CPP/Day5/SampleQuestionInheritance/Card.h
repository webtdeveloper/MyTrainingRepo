#ifndef CARD_H
#define CARD_H

#include "CardType.h"
#include <iostream>

class Card
{
    private:
        int _number;
        int _cvv_number;
        CardType _card_type;
        float _annual_charge;
        int _limit;

    public:
        
        // Card() = default;

        // Card(const Card&) = default;
        
        Card(
            int number,
            int cvv_number,
            CardType card_type,
            float annual_charge,
            int limit
        );

        virtual float CalculateTaxOnCharge() = 0;
        
        virtual ~Card(){
            std::cout << "Card with Number : " << _number << " destroyed\n";
        }

        int number() const { return _number; }

        int cvvNumber() const { return _cvv_number; }

        float annualCharge() const { return _annual_charge; }

        int limit() const { return _limit; }

        CardType cardType() const { return _card_type; }

        friend std::ostream &operator<<(std::ostream &os, const Card &rhs);

};

std::string DisplayEnum(const CardType value);

#endif // CARD_H
