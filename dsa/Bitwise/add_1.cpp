// Add 1 without using operators 

#include<iostream>
using namespace std;

int addone(int n)
{
	return (-(~n));
}
int main()
{
	int n=5;
	cout<<addone(n);
	return 0;
}
