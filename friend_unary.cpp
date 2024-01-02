#include<iostream>
using namespace std;
class Myclass{
    public: int a = 20, b=40;
    void getdata()
    {
        cout<<a;
        cout<<b;

    }
    friend void operator -(Myclass &ob);
   
};
void operator -(Myclass &ob)
{
     
        ob.a = -ob.a;
        ob.b = -ob.b;
    
}
int main()
{
    Myclass ob;
    ob.getdata();
    -ob;
    ob.getdata();
}