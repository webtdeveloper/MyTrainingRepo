#include "Card.h"
#include <iostream>

Card::Card(int number, int cvv_number, CardType card_type, float annual_charge, int limit)
 : _card_type(card_type), _annual_charge(annual_charge),
  _limit(limit)
{
    if(number >= 1000 && number < 10000){
        _number = number;
    }else{
        std::runtime_error("Invalid Number for Card");
    }

    if(cvv_number >= 100 && cvv_number < 1000){
        _cvv_number = cvv_number;
    }else{
        std::runtime_error("Invalid CVV Number for Card");
    }
}

std::ostream &operator<<(std::ostream &os, const Card &rhs) {
    os << "_number: " << rhs._number
       << " _cvv_number: " << rhs._cvv_number
       << " _card_type: " << DisplayEnum(rhs._card_type)
       << " _annual_charge: " << rhs._annual_charge
       << " _limit: " << rhs._limit;
    return os;
}

std::string DisplayEnum(const CardType value){

    if(value == CardType::MASTERCARD){
        return "MASTERCARD";
    }
    else if(value == CardType::RUPAY){
        return "RUPAY";
    }else{
        return "VISA";
    }
}
