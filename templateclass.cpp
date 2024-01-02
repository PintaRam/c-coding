#include<iostream>
using namespace std;
template<class T>
class add{
    public:
    //T a; T b;
        void ADD(T a , T b)
        {
            cout<<a+b;
        }
};
// template<class T>
// void add<T>::ADD(T a, T b)    // outside the class
// {
//     cout<<a+b;
// }
int main()
{
    add <int> a;
    a.ADD(2,3);
    add <double> b;
    b.ADD(2.3,5.6);
}