//last set bit is cancelled

#include<iostream>
using namespace std;

int off(int n)
{
	return n & (n - 1);
}
int main()
{
	int n=15;
	cout<<off(n);
	return 0;
}
