#include<iostream>
using namespace std;

int powerof(int n)
{
	if(n && !(n&(n-1)))
	cout<<"True";
	else 
	cout<<"False";
}
int main()
{
	int n=7;
	powerof(n);
	return 0;
}
