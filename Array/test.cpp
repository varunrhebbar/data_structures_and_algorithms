#include <iostream>
using namespace std;

class MyClass {   // The class
  private:         // Public access specifier
    int x;
	public:
	int y;        // Public attribute (int variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.x = 15;
  myObj.y = 20;

  // Print values
  cout << myObj.x<<"and"<<myObj.y;
  return 0;
}

