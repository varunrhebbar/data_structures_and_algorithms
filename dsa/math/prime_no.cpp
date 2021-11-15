#include<bits/stdc++.h>
using namespace std;
void primefactors(int n)
{
	while(n%2==0)
	{
		cout<<2;
		n=n/2;
		
	}
	if (n>2)
	for(int i=3;i<=sqrt(n);i=i+2)
	{
		while(n%i==0)
		{
			cout<<" ";
		}
	}
}
int main()
{
	int n=8;
	primefactors(n);
	return 0;
}

