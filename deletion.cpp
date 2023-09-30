#include<iostream>
using namespace std;
int main(){
    int pos , size;
    cout<<"enter the size of array :"<<endl;
    cin>>size;
    int array[size];
    cout<<endl<<"enter the array elements : ";
    for(int i = 0 ; i<size ; i++)
    { cout<<endl;
      cin>>array[i]  ;
    }
    cout<<endl<<"enter the postion of elements to be deleted :"<<endl;
    cin>>pos;
   for(int i = pos; i<size;i++)
   {
   
        array[i] = array[i+1];
    
   }
   cout<<"the array elements are  : "<<endl;
   for(int i =0 ; i<size-1;i++)
   {
    cout<<array[i];
   }
   return 0;
}