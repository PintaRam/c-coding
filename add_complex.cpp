//syntax for  binary operator function
// return_type :: operator binary_operator_symbol (arg)  
// {  
// // function definition  
// }  
#include<iostream>
using namespace std;
class complex{
    private:   // to access the private data members we used the friend()
        double real , imaginary;
    public:
        complex(double real = 0 , double imaginary  = 0)
        {
            this->real =real;
            this->imaginary = imaginary;
        }
        //frind function declaration
        friend complex operator-(complex c1 , complex c2);
        void print_data()
        {
            cout <<"subtraction of two complex number is : "<<real<<" - "<<imaginary<<"i"<<endl;
        }
};
//friend() definition
complex operator-(complex c1  , complex c2)
{
    complex res;
    res.real = c1.real -c2.real;
    res.imaginary = c1.imaginary - c2.imaginary;
    return res;
}
int main() {
        complex result;
        double real , imaginary;
        cout<<"Enter the real and imaginary part of first complex number : ";
        cin>>real>>imaginary;
        complex c1(real , imaginary);
        cout<<"Enter the real and imaginary part of second complex number : ";
        cin>>real>>imaginary;
        complex c2(real,imaginary);
        result = c1 - c2; // calling the frind() using binary operator  -
        result.print_data();
}