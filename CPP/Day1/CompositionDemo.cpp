/*

Composotion : 
Class A is made by using class B in such a way that class B cannot exist independently but class A has
 its own existence.

*/

#include<iostream>

class DebitCard{
    private:
        int _cvv_number;
        std::string _card_number;

    public:
        DebitCard(int cvv, std::string number)
        : _cvv_number(cvv), _card_number(number){}

        ~DebitCard(){
            std::cout << "Debit Card Destroyed\n";
        }
};

class Account{
    private:
        DebitCard* obj;
        std::string name;

    public:
        Account(DebitCard* card, std::string name)
        : obj(card), name(name){}

        ~Account(){

        }

        friend std::ostream &operator<<(std::ostream &os, const Account &rhs) {
            os << "Object: " << rhs.obj
               << "\nName: " << rhs.name<<"\n";
            return os;
        }
};

int main(){
    Account* ac1 = new Account(new DebitCard(731, "4314 56"), "Shubham");

    std::cout << *ac1;


}
