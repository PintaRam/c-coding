#include<iostream>
#include<string>
using namespace std;
class Employee{
    public:
        string name ,address;
        float salary;
        int doj;
    Employee(string name  , int doj , string address, float salary )
    {
        this->name = name;
        this->salary = salary;
        this->address = address;
        this->doj = doj;
    }
    void getdata()
    {
        cout<<"\t"<<name<<"\t      "<<doj<<"\t\t    "<<address<<"\t   "<<salary<<endl;
    }
};
int main()
{
    Employee emp1("Robert",1994,"64C- WallsStreat",20000);
    Employee emp2("Sam",2000,"68D- WallsStreat",30000);
    Employee emp3("Sam" ,2000 ,"68D- WallsStreat",40000);
    cout<<"\t Name \t date of joining \t address \t salary"<<endl;
    emp1.getdata();
    emp2.getdata();
    emp3.getdata();
    return 0;
    
}