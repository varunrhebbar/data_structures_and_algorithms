#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  int age;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout<<"Enter your age:";
  cin>>age;
  cout << "Your name is: " << fullName<<"And age is "<<age;
  return 0;
}

