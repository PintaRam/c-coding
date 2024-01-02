#include<iostream>
using namespace std;
template<class T,class T2>
void swap(T a, T2 b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<a<<b;
}
int main()
{     
    swap(10,30);
    swap(20.03,40.24);
    swap(20,30.8);
}