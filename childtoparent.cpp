//program to find the sum of two numbers & then find the area of circle considering sum as radius;
#include <iostream>
#include<math.h>
using namespace std;
class Myclass{
    public: int a,b;
    protected: int sum;
    public:
        Myclass(int a , int b)
        {
            this->a =a;
            this->b =b;
        }
        void Add()
        {
             sum = a+b;
            cout<<"sum of two numbers is : "<<sum<<endl;
        }
};
class Derived:public Myclass{
    //private variables declaration
    private: const float PI =3.143;
    public:
        // calling a parent constructor in child class
        Derived(int a ,int b):Myclass(a,b){
            
        }
       
       
        void areofcir(){
            cout<<"area of circle is given by : "<<PI*sum*sum;
        }
};

int main() {
    Derived der(2,3);
    der.Add();
    der.areofcir();
    

    return 0;
}