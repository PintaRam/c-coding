#include<iostream>
using namespace std;
void input_the_equation(int equ[3][4])
{
    cout<<"Enter the coeffient of equation :"<<endl;
    for(int i = 1; i<=3; i++)
    {
         for(int j = 1 ; j<=4 ; j++)
         {
            if(j==1)
            {
                cout<<"enter the value of X["<<i<<"]: ";
                cin>>equ[i][j];
            }
            else  if(j==2)
            {
                cout<<"enter the value of Y["<<i<< "]: ";
                cin>>equ[i][j];
            }
            else  if(j==3)
            {
                 cout<<"enter the value of Z["<<i<< "]: ";
                 cin>>equ[i][j];
            }
             else  
            {
                 cout<<"enter the value of D["<<i<< "]: ";
                 cin>>equ[i][j];
                 cout<<endl;
            }
         }
    }
}


void display_the_equation(int equ[3][4])
{
    cout<<" The entered equation  are :"<<endl;
    for(int i = 1; i<=3; i++)
    {
         for(int j = 1 ; j<=4 ; j++)
         {
           if(j==1)
           {
            cout<<equ[i][j]<<" X ";
           }
           else if(j==2)
           {
            cout<<"+ "<<equ[i][j]<<" Y ";
           }
           else if(j==3)
           {
            cout<<"+ "<<equ[i][j]<<" Z ";
           }
           else
           {
            cout<<"= "<<equ[i][j]<<endl;
           }
         }
    }
}
bool check_for_diagonally_dominant(int equ[3][4])

{   
  
    int count =0;
    for(int i = 1 ; i<=3; i++)
    {   
        for(int j =1; j<=3; j++)
        {
            int temp = equ[i][i];
            if(temp>equ[i][j])
            {
                 count++;
            }
          
        }
    }
     if(count>=9)
            {
                return true;
                }
            else
            {
                return false;
            }
     
}
void convert_into_diag_dominant(int equ[3][4])
{   int i , max , max1=1 ,max2=2 , max3=3;
  
    for( i = 1 ;i<=3; i++)
     {
      max = equ[i][i];
      for(int j = 1; j<=3 ; j++)
       { 
         if(max<equ[i][j]) 
            {
              if(i==1)
              { 
                max = equ[i][j];
                max1 = j;
                //  cout<<i<<endl; 
                //  cout<<"max1 = "<<max1<<endl;

              }
              if(i == 2)
              {max = equ[i][j];
                max2 =  j;
                //  cout<<i<<endl; 
                // cout<<"max2 = "<<max2<<endl;
              }
              if(i == 3)
              { 
                //cout<<max3<<endl;
                // cout<<"j = "<<j<<endl;
                max = equ[i][j];
                max3 = j;
                //  cout<<i<<endl; 
                 // cout<<"max 3= "<<max3<<endl;
                // cout<<max3<<endl;
               
              }
            }
       }
    }
   cout<<max1<<endl<<max2<<endl<<max3<<endl;
       for(int i = 1; i<=3 ; i++)
       {
       
            if(max2 <max1 )
            { for(int j = 1; j<=4 ;j++)
            {
                int temp = equ[1][j];
                equ[1][j] =equ[2][j];
                equ[2][j] = temp;
                
            }
            int temp = max1;
            max1 = max2;
            max2 = temp;
            }
            if(max3<max1 )
            {for(int j = 1; j<=4 ;j++)
            {
                int temp = equ[1][j];
                equ[1][j] =equ[3][j];
                equ[3][j] = temp;
            }
             int temp = max1;
            max1 = max3;
            max3 = temp;
            }
            if(max3<max2 )
            {for(int j = 1; j<=4 ;j++)
            {
                int temp = equ[2][j];
                equ[2][j] =equ[3][j];
                equ[3][j] = temp;
            }
            int temp = max2;
            max2 = max3;
            max3 = temp;
            }
       }
     
   }
   
void relaxation(int equ[3][4])
{int a[20][6];
 int j = 0;
 int max , ln;
 for(int j = 0 ; j<sizeof(a); j++)
 {
  for(int i =0 ; i<6;i++)
  {
    a[0][i] = 0;
    if(i>2)
    {   
        a[0][i] = equ[j][4];
        j++;
    }
  }
  for(int i = 4 ; i<6; i++)
  {  max = a[0][4];
    if(max<a[0][i])
    {
        max = a[0][i];
    }
  }
   for(int i = 1 ;i<max ; i++)
   { int temp;
    if(max == a[0][4])
    {  if(i ==1)
    { 
      int temp = equ[0][1]*i -max;  
    } 
       int temp1 = equ[0][1]*i -max;
       if(temp1>temp){
       temp1 = temp;
       ln = i;
       
       }
    }
   }
   j =0 ;
   for(int i = 3 ; i <6 ;i++)
   {
    a[0][i]= ln*equ[0][j]-a[0][i];
    j++;
   }
}
for(int  i = 0 ; i<sizeof(a) ; i++)
{
  for(int  j = 0 ; j<sizeof(a) ; j++)
  {
    cout<<a[i][j]<<"  ";
  }
  cout<<endl;
}
}
int main()
{
int equation[3][4];
input_the_equation(equation);
display_the_equation(equation);
if(check_for_diagonally_dominant(equation)) 
 {
  cout<<"The given equation are diagonally dominant..." <<endl;
 }
 else
 {
     convert_into_diag_dominant(equation );
 }
 relaxation(equation);
//display_the_equation(equation);
display_the_equation(equation);
return 0;

}
