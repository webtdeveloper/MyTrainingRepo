#include <iostream>

int main(){
    //Data created in stack
    int a = 10;
    std::cout<< "a = " << a << ", a address: " << &a << "\n";

    //Data created in heap
    int* p_number = nullptr;
    p_number = new int;

    *p_number = 20;
    std::cout<< "p_number value : " << *p_number << ", p_number address : " << p_number <<"\n";

    delete p_number;
    p_number = nullptr;

    //std::cout<< "p_number value : " << *p_number << ", p_number address : " << p_number <<"\n";

    

}