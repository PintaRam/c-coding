#include<iostream>
using namespace std;
class A
{
    public:
    A()
    {
        cout<<"A";
    }
    ~A()
    {
        cout<<"~A";
    }
    int a = 10;
    int b = 20;
};
class B: virtual public A
{  public:
     B()
    {
        cout<<"B";
    }
    ~B()
    {
        cout<<"~B";
    }
    public:
    int sum = a+b;
};
class C : virtual public A
{   public:
     C()
    {
        cout<<"C";
    }
    ~C()
    {
        cout<<"~C";
    }
    int avg = (a+b)/2;
};
class D:public B, public C{
    public:
    D()
    {
        cout<<sum<<endl<<avg;
        cout<<a;
    }
    ~D()
    {
        cout<<"~D";
    }
};
int main()
{
    D d;
}