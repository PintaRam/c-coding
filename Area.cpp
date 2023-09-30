#include<iostream>
using namespace std;
class Area 
{
    public:
        float  length ,  breadth ;
        void setDim(float length , float breadth)
        {
            this->length = length;
            this->breadth = breadth;
        }
        void getArea()
        {
            cout<<endl<<"Area of a rectangle : "<<length*breadth;
        }
};
 
int main()
{ 
    Area are;
    float length , breadth;
    cout<<"Enter the length of a rectangle : ";
    cin>>length;
    cout<<endl<<"Enter the breadth of a rectangle : ";
    cin>>breadth;
    are.setDim(length , breadth);
    
    are.getArea();
    
} 


