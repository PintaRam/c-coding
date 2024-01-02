#include<iostream>
using namespace std;
int c = 20;
class B;
class A
{
    int a =20;
    public:
        static void fun()
        {
            cout<<"hello";
        }
        friend void max(A,B);
};
class B
{
    int b =200;
    public:
        friend void max(A,B);
        
};
void max(A aa, B bb)
{
    if(aa.a>bb.b)
    {
        cout<<aa.a;

    }
    else
    {
        cout<<bb.b;
    }
}
//int A::d=30;
int main()
{   cout<<::c;
    A::fun();
    A aa; B bb;
    max(aa,bb);
}