#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	return gcd(b, a % b);
	
}

int main()
{
	int a = 90, b = 100;
	cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
	return 0;
}

