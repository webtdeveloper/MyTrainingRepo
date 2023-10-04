#include <iostream>

void Demo(){
    int n1 = 10;
    int n2 = 20;
    //const is applied on 'int' not on 'int*'
    const int* ptr = &n1;
    std::cout<<ptr<<"\n";
    std::cout<<*ptr<<"\n";

    //since pointer itself is not constant, its 'constant' can be changed,
    //so address inside ptr can be changed
    ptr = &n2;
    std::cout<<ptr<<"\n";
    std::cout<<*ptr<<"\n";

    //since int part is constant, I cannot use pointer to change n1's value
    // *ptr = 100; //not allowed
    // std::cout<<ptr<<"\n";
    // std::cout<<*ptr<<"\n";


    //const int* ptr = &n1;

}

int main(){
    Demo();
}