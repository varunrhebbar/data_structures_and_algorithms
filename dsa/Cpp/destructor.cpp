// Destructror

// CPP program to illustrate
// Private Destructor

#include <iostream>

using namespace std;

class Test {
public:
	Test() // Constructor
	{
		cout << "Constructor called\n";
	}

private:
	~Test() // Private Destructor
	{
		cout << "Destructor called\n";
	}
};

int main()
{
 	Test* t = new Test;
    cout<<"hello";
	return 0;
}

