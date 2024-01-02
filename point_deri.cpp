#include <iostream>  
using namespace std;  
 class Animal {  
   public:  
   void eat() {   
    cout<<"Eating..."<<endl;   
 }    
   };  
   class Dog: public Animal    
   {    
       public:  
       void eat() {
        Animal::eat();   
    cout<<"Eating"<<endl;   
 }    
     void bark(){  
    cout<<"Barking...";   
     }    
   };   
int main(void) {  
    Animal a;
    
    Animal *b;
    // b = &a;
    // b->eat();
    Dog d2;
    d2.eat();
    b = &d2;
    b->eat();
    //((Dog*)b)->eat();
  // Dog d1;  
    // d1.eat();  
    // d1.bark();  
    return 0;  
}  