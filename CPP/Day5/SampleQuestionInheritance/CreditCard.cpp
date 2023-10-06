#include "CreditCard.h"
#include <iostream>

CreditCard:: CreditCard(int number, int cvv_number, CardType card_type, float annual_charge, int limit,
    float transaction_limit)
    : Card(number, cvv_number, card_type, annual_charge, limit),
     _transaction_limit(transaction_limit)
{
}


std::ostream &operator<<(std::ostream &os, const CreditCard &rhs) {
    os << static_cast<const Card &>(rhs)
       << " _transaction_limit: " << rhs._transaction_limit;
    return os;
}
