#include <iostream> 
using namespace std;
class B { };
class D: public B { };
int main()
{
D derived;
try 
{ throw derived;
} 

catch(D d) 
{ cout << "This won't execute.\n"; 
}
catch(B b) 
{ 
cout << "Caught a base class.\n"; 
} 
return 0;
}