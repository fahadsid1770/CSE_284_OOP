/* A C++ program to find the sum of two complex numbers using
binary operator overloading. */

#include <iostream>
using namespace std;
class Complex {
private:
    float real;
    float imag;

public:
    Complex() {
        real = 0;
        imag = 0;
    }
    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }
    // Overload the + operator
    Complex operator+(Complex c)
    {
        Complex temp;
        temp.real = real + c.real; // ageh thekei c1 ,real e ache.. pore '+' khuje pawar por baki c.real add hbe
        temp.imag = imag + c.imag;
        return temp;
    }
    void output()
    {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};
int main(){
    Complex c1, c2, result;
    cout << "Enter first complex number- "<<endl;
    c1.input();
    cout << "Enter second complex number- "<<endl;
    c2.input();
    result = c1 + c2; // object add korar jonno operator overloading use krte hbe
    // c1.add(c2); same meaning
    result.output();
    return 0;
}