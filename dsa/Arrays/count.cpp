#include<iostream>
using namespace std;

int countdigits(int n)
{
	int count=0;
	while (n!=0)
	{
	n=n/10;
	++count;	
	}
	return count;	
}
int main()
{
	int n;
	countdigits(n);
	cin>>n;
	cout<<countdigits(n);
	return 0;
}
