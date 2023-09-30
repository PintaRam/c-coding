#include <iostream>
using namespace std;

// A class to represent complex numbers
class Complex {
    private:
        // Real and imaginary parts
        double real, imag;
    public:
        // Constructor to initialize the complex number
        Complex(double r = 0, double i = 0) {
            real = r;
            imag = i;
        }

        // A friend function to overload the + operator
        friend Complex operator+(Complex c1, Complex c2);

        // A function to display the complex number
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

// The friend function to overload the + operator
Complex operator+(Complex c1, Complex c2) {
    // Create a new complex number to store the result
    Complex result;
    // Add the real and imaginary parts of the operands
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    // Return the result
    return result;
}

// The main function
int main() {
    // Create two complex numbers
    Complex c1(3, 4); // 3 + 4i
    Complex c2(5, 6); // 5 + 6i

    // Display the complex numbers
    cout << "c1 = ";
    c1.display();
    cout << "c2 = ";
    c2.display();

    // Add the complex numbers using the overloaded + operator
    Complex c3 = c1 + c2;

    // Display the result
    cout << "c1 + c2 = ";
    c3.display();

    return 0;
}
