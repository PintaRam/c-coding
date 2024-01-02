#include<iostream>
using namespace std;
int main()
{
    try{
          cout<<"i am throwing 123"<<endl;
          throw 123;
          
    }catch(int cat)
    {
        cout<<cat;
    }
}