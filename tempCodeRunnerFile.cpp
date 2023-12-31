// CPP program without virtual destructor 
// causing undefined behavior
#include <iostream>

using namespace std;

class base {
public:
	base()	 
	{ cout << "Constructing base\n"; }
	virtual ~base()
	{ cout<< "Destructing base\n"; }	 
};

class derived: public base {
public:
	derived()	 
	{ cout << "Constructing derived\n"; }
	~derived()
	{ cout << "Destructing derived\n"; }
};

int main()
{
base *d = new derived(); 
delete d;

return 0;
}
