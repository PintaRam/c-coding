#include<iostream>
#include<string>
using namespace std;
class Electricity_bill{
    public:
        float charges , num_of_units;
        string name;
        void get_data()
        {
            cout<<"Enter the name of the person : ";
            cin>>name;
            cout<<endl<<"Enter the number of units consumed : ";
            cin>>num_of_units;
        }
        void compute()
        {
            if(num_of_units < 100)
            {
                charges = num_of_units*0.40;
            }
            else if(num_of_units >100 and num_of_units <300)
            {
                charges = 100*0.40;
                charges+=((num_of_units-100)*0.50);
            }
            else{
                charges = 100*0.40;
                charges += 200*0.50;
                charges+=((num_of_units-300)*0.60);
            }
            if(charges <500)
            {
                charges = 500;
            }
            if(charges >2500)
            {
                charges +=(charges*0.15);
            }
        }
        void print_data()
        {
            cout<<"Name : \t"<<name<<endl;
            cout<<"Number of units consumed : "<<num_of_units<<endl;
            cout<<"charges : \t"<<charges;
        }
};
int main() {
    Electricity_bill eb;
    eb.get_data();
    eb.compute();
    eb.print_data();
    return 0;
}

