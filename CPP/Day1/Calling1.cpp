#include <iostream>

//call by value: copy 
/*
void magic(int data){
    std::cout << "Address of data : " << &data <<"\n";
    std::cout << "Content in data : " <<data <<"\n";
    data = 100;
    std::cout << "Content after modification in data : " <<data <<"\n";

}
*/


//call by reference

void magic(int& data){
    std::cout << "Address of data : " << &data <<"\n";
    std::cout << "Content in data : " <<data <<"\n";
    data = 100;
    std::cout << "Content after modification in data : " <<data <<"\n";

}



int main(){
    int n1 = 10;
    //magic(10); //10 will be be copied into scope of magic
     std::cout << "Address of data : " << &n1 <<"\n";
    std::cout << "n1 before modification by magic : " <<n1 <<"\n";
    magic(n1); //n1 will be copied into scope of magic
    std::cout << "n1 after modification by magic : " <<n1 <<"\n";
}