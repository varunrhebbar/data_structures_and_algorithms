#include <iostream>
#include <string>
using namespace std;

int main()
 {
  string name = "varun";
  string* ptr = &name;

  cout << name <<endl;

  cout << &name <<endl;

  cout << *ptr <<endl;
  
  *ptr = "Hebbar";
  
  cout << *ptr << "\n";
  
  cout << name << "\n";
  return 0;
}

