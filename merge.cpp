#include<iostream>
using namespace std;

void merge(int l[], int  r[], int a[],int nl, int nr)
{
    int i=0,j=0,k = 0;
    while (i<nl && j<nr)
    {
        if (l[i] <= r[j])
        {
            a[k] = l[i];
            k++;
            i++;
        }
        else
        {
            a[k] = r[j];
            k++;
            j++;
        }
    }
    while (i<nl)
    {
        a[k] = l[i];
        i++;
        k++;
    }
    while (j<nr)
    {
        a[k] = r[j];
        j++;
        k++;
    }
}

void mergesort(int a[],int n)
{
     if(n<2)
       return;
    int  mid = n/2;
   int *l = new int[mid];
    int *r = new int[n-mid];
    for (int  i = 0; i < mid; i++)
    {
        l[i] = a[i];
    }
    for (int  i = mid; i < n; i++)
    {
            r[i-mid] = a[i];
    }  
    mergesort(l,mid);
    mergesort(r,n-mid);
    merge(l,r,a,mid,n-mid);
    delete[] l;
    delete[] r;
}

int main()
{
    int a[] = {10,5, 4,20 ,3,2,1 , 30 , 20 , 8};
    int n = 10;
    cout<<"Array before sorting: "<<endl;
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Array after sorting "<<endl;
    mergesort(a,10);
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    
 return 0 ;
}