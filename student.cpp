#include<iostream>
#include<string>
using namespace std;
class student
{

public:
    string name ; int roll_no;
    
};
 

int main()
{
    student obj;
    obj.name = "john";
    obj.roll_no = 4;
    cout<<"name is : "<<obj.name<<endl<<"roll_no :"<<obj.roll_no;
    return 0;
} 
