#include <iostream>

class Employee
{
    private:
        std::string _name;
        int _id;

    public:
        Employee(std::string name, int id)
        : _name(name), _id(id)
        {
        }

        ~Employee() {
            std::cout<< "Employee with : " << _id <<" destroyed.\n";
        }

        std::string name() const { return _name; }

        int id() const { return _id; }

        friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};


class Car
{
    private:
        std::string _carName;
        int _carId;
        
    public:
        Car(std::string carName, int carId)
        : _carId(carId), _carName(carName)
        {
        }

        ~Car() {
            std::cout<< "Car with : " << _carId <<" destroyed.\n";
        }

        std::string carName() const { return _carName; }

        int carId() const { return _carId; }

        friend std::ostream &operator<<(std::ostream &os, const Car &rhs);

};

// Generics in Java or Templates in CPP

inline std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_name: " << rhs._name
       << " _id: " << rhs._id;
    return os;
}

inline std::ostream &operator<<(std::ostream &os, const Car &rhs) {
    os << "_carName: " << rhs._carName
        << " _carId: " << rhs._carId;
    return os;
}

template <typename T>
void display( T arr[3] ){
    for(int i = 0; i < 3; i++){
        std::cout<< "Adress: " <<arr[i] <<"\n";
        std::cout<< "Data: " <<*arr[i] <<"\n";
    }
}


int main(){
    Car* arr1[3];

    arr1[0] = new Car("Maruti", 101);
    arr1[1] = new Car("Mahindra", 102);
    arr1[2] = new Car("Toyota", 103);


    Employee* arr2[3];

    arr2[0] = new Employee("Shubham", 101);
    arr2[1] = new Employee("Manish", 102);
    arr2[2] = new Employee("Ganesh", 103);

    display<Car*>(arr1);
    display<Employee*>(arr2);

}

