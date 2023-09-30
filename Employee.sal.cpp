#include<iostream>
using namespace std;
class Employee{
    public:
        float salary;
        int num_of_hrs;
        Employee(float salary , int num_of_hrs)
        {
            this->salary = salary;
            this->num_of_hrs = num_of_hrs;
        }
        void getinfo()
        {
            cout<<"salary of Employee : "<<salary;
            cout<<endl<<"Number of hours work per day : "<<num_of_hrs;
        }
        void Addsal()
        {
            if(salary < 500)
            {
                salary +=500;
            }
        }
        void Addwork()
        {
            if(num_of_hrs > 6)
            {
                salary+=5;
            }
        }
        void final_salary()
        {
            cout<<endl<<"Final salary of a Employee :"<<salary<<endl;
            cout<<"Number of hours work per day : "<<num_of_hrs;
        }
};
int main()
{   float salary; int num_of_hrs;
    cout<<"Enter the salary of employee  : ";
    cin>>salary;
    cout<<endl<<"Enter the number of hours per week : ";
    cin>>num_of_hrs;
    Employee emp(salary , num_of_hrs);
    emp.getinfo();
    emp.Addsal();
    emp.Addwork();
    emp.final_salary();
    return 0;

} 
