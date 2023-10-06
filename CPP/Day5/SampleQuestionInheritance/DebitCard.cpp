#include "DebitCard.h"
#include <iostream>

DebitCard::DebitCard(int number, int cvv_number, CardType card_type, float annual_charge, int limit,
    CategoryType category)
    : Card(number, cvv_number, card_type, annual_charge, limit), _category(category)
{  
}

std::ostream &operator<<(std::ostream &os, const DebitCard &rhs) {
    os << "_category: " << DisplayCategory(rhs._category);
    return os;
}

std::string DisplayCategory(const CategoryType value){
    if(value == CategoryType::SIGNATURE){
        return "SIGNATURE";
    }
    else if(value == CategoryType::PRIMIUM){
        return "PRIMIUM";
    }else{
        return "DELUXE";
    }
}

