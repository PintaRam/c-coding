#include<iostream>
using namespace std;
int main(){
    int size,x,pos;
   cout<<"ENTER THE SIZE OF ARRAY :  ";
   cin>>size;
   int array[size];
   cout<<endl<<"ENTER THE ARRAY ELEMENTS : ";
   for(int i =0 ; i<size; i++)
   { 
    cin>>array[i];
    cout<<endl;
   }
    cout<<"array elements before insertion  : "<<endl;
    for(int i =0 ; i<size ; i++)
    {
    cout<<array[i]<<"  ";
    }
    cout<<endl<<"ENTER THE ELEMENT TO INSERT  : ";
    cin>>x;
    label:
    cout<<endl<<"ENTER THE POSITION WHERE TO BE INSERTED : ";
    cin>>pos;
    if(pos>size){
    cout<<"out of array size : ";
    goto label;
    }
    else{
    for(int i = size+1 ; i>=pos ;i--)
    {
        array[i] =array[i-1];
    }
    array[pos] = x;
    cout<<endl<<"ARRAY AFTER THE INSERTION : "<<endl;
    for(int i =0 ; i<=size ; i++)
    {
    cout<<array[i]<<"  ";
    }
    }
    return 0;
}
