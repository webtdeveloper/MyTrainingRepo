#include<iostream>

int Factorial(int number){
    if(number < 0){
        throw std::runtime_error("Negative Number Problem");
    }

    else if(number == 1){
        return 1;
    }

    else{
        return number * Factorial(number-1);
    }
}

float Square(float number){
    return number * number;
}

int Cube(float number){
    return number * number * number;
}


void SwitchMenu(){
    while(true)
    {
        int choice = 0;
        float number;

        std::cout << "Enter Number : ";
        std::cin >> number;
        std::cout <<"Enter 1 for Square\nEnter 2 for Cube\nEnter 3 for Factorial\n";
        std::cout <<"Enter Choice : ";
        std::cin>> choice;

        switch (choice)
        {
            case 1:
                std::cout << "Square : " << Square(number) << "\n";
                break;

            case 2:
                std::cout << "Cube : " << Cube(number) << "\n";
                break;

            case 3:
                try{
                    int fact = Factorial(static_cast<int>(number)); //explicit type casting
                    std::cout << "Factorial : " << fact << "\n";
                }catch(std::runtime_error& ex){
                    std::cout << ex.what() << '\n';
                }
                break;

            case 4:
                exit(0);
                
            default:
                std::cout << "Please try again\n";
                break;
        }
    }
    
}

int main(){
    SwitchMenu();
}