#include <iostream>

class Complex
{
    private:
        float _real;
        float _imag;

    public:
        Complex(float real, float imag)
           : _real(real), _imag(imag) 
        {
        }

        ~Complex() {
            //std::cout<< "Object Destroyed\n";
        }

        Complex operator+(Complex n1){
            float r = this->_real + n1._real;
            float i = this->_imag + n1._imag;

            Complex temp(r,i);
            return temp;
        }

        void display(){
            std::cout<<this->_real <<" + " <<this->_imag<<"i\n";
        }

        friend std::ostream &operator<<(std::ostream &os, const Complex &rhs);
};

inline std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
    os << "_real: " << rhs._real
       << " _imag: " << rhs._imag;
    return os;
}

int main(){
    Complex c1(2.5f, 4.0f);
    Complex c2(3.0f, 2.0f);

    c1.display();
    c2.display();
    Complex c3 = c1 + c2; //c1.operator+(c2)
    c3.display();
}
