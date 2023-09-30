#include<iostream>
#include<math.h>
using namespace std;
class Triangle
{
public:
   int x , y , z ;
   float area  , perimeter;
   void print()
   {
    cout<<"area of a triangle is : "<<area;
    cout<<endl<<"perimeter of a triangle : "<<perimeter;
   }
};



int main()
{
   Triangle tri;
   tri.x =3 , tri.y =4 , tri.z =5;
    float s = (tri.x+tri.y+tri.z)/2;
   tri.area = sqrt(s*((s-tri.x)*(s-tri.y)*(s-tri.z)));
   tri.perimeter = tri.x+tri.y+tri.z;
   tri.print();
   return 0;

} 

