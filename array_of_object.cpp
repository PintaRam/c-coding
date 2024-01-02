#include<iostream>
using namespace std;
class array_of_object
{
private:
  char name[20];
public:
    void namee()
    {
        cin>>name;
        cout<<name<<endl;
    }
   
};
int main()
{   array_of_object ob[3];
    for(int i=0;i<3;i++)
    {
        ob[i].namee();
    }
}