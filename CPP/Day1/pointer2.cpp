#include <iostream>

int main(){

    //Array
    int arr[5] = {1,2,3,4,5};

    std::cout << "Content of arr : (address of first location)"
              << *arr
              << "\n";

    std::cout << "address of first location: " 
              << (arr+0) 
              << "\n";


}