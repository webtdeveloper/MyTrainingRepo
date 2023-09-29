#include <iostream>

int main(){

    //Pointer

    int n1 = 10;
    int *ptr = &a;
    int **sptr = &ptr;
    
    std::cout << n1 << std:: endl;
    std::cout << ptr << std:: endl;
    std::cout << *ptr << std:: endl;
    std::cout << sptr << std:: endl;
    std::cout << **sptr << std:: endl;

    return 0;
}