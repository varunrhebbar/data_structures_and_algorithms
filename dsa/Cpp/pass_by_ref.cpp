#include<iostream>
#include<string>
using namespace std;
void swap(int &a, int &b)
{
	int c=a;
		a=b;
		c=a;
}
int main() 
{
	  int x = 121;
	  int y = 321;
	  cout << "Before swap: " << "\n";
	  cout << x << y << "\n";
	  swap(x, y);
	  cout << "After swap: " << "\n";
	  cout << x << y << "\n";
	  return 0;
}
