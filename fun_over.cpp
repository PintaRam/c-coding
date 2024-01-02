#include<iostream>
using namespace std;
inline  add(int a , int b)
{
    cout<<a+b;
}
void add(int a, double b)
{
  cout<<endl<<a+b<<"radhe";

}
int main()
{
    add(2,4);
    add(4,5.5);
    return 0;
}