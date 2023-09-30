#include<iostream>
using namespace std;
class Complex{
    public:
        int real , imaginary ;
    Complex(int real = 0 , int imaginary = 0)
    {
        this->real = real ;
        this->imaginary =imaginary;
    }
    Complex add( Complex c1 , Complex c2)
    {  
        Complex res;
        res.real = c1.real +c2.real;
        res.imaginary = c1.imaginary +c2.imaginary;
        return res;
    }
    Complex subtract( Complex c1 , Complex c2)
    {
        Complex res; 
        res.real = c1.real  - c2.real;
        res.imaginary = c1.imaginary - c2.imaginary;
        return res;
    }
    Complex product( Complex c1 , Complex c2)
    {
        Complex res;
       res.real=(c1.real*c2.real)-(c1.imaginary*c2.imaginary);
       res.imaginary=(c1.real*c2.imaginary)+(c1.imaginary*c2.real);
       return res;
    }
    

};

int main(){
    
    int real , imaginary ;
    cout<<"Enter the real and imaginary  part of first complex number : ";
    cin>>real>>imaginary;
    Complex c1(real , imaginary);
    cout<<endl<<"Enter the real and imaginary  part of second complex number : ";
    cin>>real>>imaginary;
    Complex c2(real , imaginary);
    Complex result;
    result = result.add(c1 , c2) ; 
    cout<<"addition of complex number : "<<result.real<<" + "<<result.imaginary<<"i"<<endl;
    result = result.subtract(c1 , c2) ;
    
    cout<<"subtraction of complex number : "<<result.real<<" + "<<result.imaginary<<"i"<<endl;
    result = result.product(c1 , c2) ;
    
    cout<<"product of complex number : "<<result.real<<" + "<<result.imaginary<<"i"<<endl;
    return 0;

}

