#include<iostream>
using namespace std;
class Myclass{
    public: int a = 20, b=40;
    void getdata()
    {
        cout<<a;
        cout<<b;

    }
    void operator -()
    {
        a = -a;
        b = -b;
    }
};
int main()
{
    Myclass ob;
    ob.getdata();
    -ob;
    ob.getdata();
}