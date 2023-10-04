#include <iostream>

void Demo(){
    int n1 = 10;
    int n2 = 20;
    //const is applied on 'int' not on 'int*'
    const int* ptr = &n1;

    //since pointer itself is not constant, its 'constant' can be changed,
    //so address inside ptr can be changed

    //since int part is constant, I cannot use pointer to change n1's value
    //*ptr = 100; //not allowed


    const int* ptr = &n1;

}