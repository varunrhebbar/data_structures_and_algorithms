#include <iostream>
using namespace std;
int gcd( int a, int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}

lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

int main()
{
	int a = 15, b = 20;
	cout <<"LCM of " << a << " and "<< b << " is " << lcm(a, b);
	return 0;
}

