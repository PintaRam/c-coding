#include<iostream>
using namespace std;
class Test{
public:
int a,b;
inline  add(int a , int b)
{
    cout<<a+b;
}
void add(int a, double b)
{
  cout<<endl<<a+b<<"radhe";

}
};
int main()
{   Test *ptr;
    ptr = new Test;
    ptr->add(2,4);
    ptr->add(4,5.5);
    delete ptr;
    ptr->add(3,4);
    *ptr->add(10,20);
    return 0;
}