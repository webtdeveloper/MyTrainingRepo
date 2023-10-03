#include <iostream>

int main(){
    // std::cout << "Hello World" << std:: endl;

    // char arr[6] = "hello";
    // std::cout<<arr<<"\n";
    // std::cout<<arr[0]<<"\n";
    // std::cout<<arr[1]<<"\n";
    // std::cout<<arr[2]<<"\n";
    // std::cout<<arr[3]<<"\n";
    // std::cout<<arr[4]<<"\n";
    // std::cout<<(arr+0)<<"\n";
    // std::cout<<(arr+1)<<"\n";
    // std::cout<<(arr+2)<<"\n";
    // std::cout<<(arr+3)<<"\n";
    // std::cout<<(arr+4)<<"\n";
    // std::cout<<&arr<<"\n";
    //std::cout<<arr[0]<<"\n";

    std::string str1 = "Hello";
    std::string str2;
    str2 = str1;
    std::string str3 = "Hello";

    std::cout<<str1<<"\n";
    std::cout<<str2<<"\n";
    std::cout<<&str1<<"\n";
    std::cout<<&str2<<"\n";

    std::cout<<str3<<"\n";
    std::cout<<&str3<<"\n";


}