#include<iostream>
#include<math.h>
using namespace std;

bool isprime(int n)
{
	if(n<=1)
	return false;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i==0)
			return false;
		return true;
}
int main()
{
	int n;
	cin>>n;
	isprime(n)?cout<<"True":cout<<"False";
	return 0;
}
