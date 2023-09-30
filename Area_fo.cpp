#include<iostream>
#include<math.h>
using namespace std;
class Fun_Overld{
    public:
        void Area(int length)
        {
            cout<<"Area of Square is : "<<length*length<<endl;
        }
        void Area(int length , int breadth)
        {
            cout<<"Area of rectangle is : "<<length*breadth;
        }
        void Area(float radius)
        {
            cout<<endl<<"Area of circle is : "<<M_PI*pow(radius,2);
        }
        
        void Area(int x , int y , int z)
        {
         float s = (x+y+z)/2;   
        cout<<"Area of a triangle is :"<<sqrt(s*(s-x)*(s-y)*(s-z));
        }
};
int main() {
    Fun_Overld FO;
    int length , breadth , x, y ,z;
    float radius;
    cout<<"Enter the length of a square : ";
    cin>>length;
    FO.Area(length);
    cout<<endl<<"Enter the length and breadth of rectangle : ";
    cin>>length>>breadth;
    FO.Area(length , breadth);
    cout<<endl<<"Enter the radius of circle :";
    cin>>radius;
    FO.Area(radius);
    cout<<endl<<"Enter the three sides of triangle :";
    cin>>x>>y>>z;
    FO.Area(x,y,z);
    return 0 ;
}