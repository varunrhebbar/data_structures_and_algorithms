#include<iostream>
using namespace std;

int powerof(int n)
{
	if(n && (n&(n-1)))
	cout<<"False";
	else 
	cout<<"True";
}
int main()
{
	int n=16;
	powerof(n);
	return 0;
}
