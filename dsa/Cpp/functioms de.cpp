#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string name = "varun";  
  string* ptr = &name; 

  cout << ptr << "\n";

  cout << *ptr << "\n";
  return 0;
}

