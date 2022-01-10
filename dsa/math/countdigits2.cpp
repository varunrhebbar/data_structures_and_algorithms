#include<iostream>
using namespace std;

int countdigits(int n)
{
	if(n==0)
	return 0;
	else
	return 1+countdigits(n/10);
 } 
int main()
{
	int n;
	countdigits(n);
	cin>>n;
	cout<<countdigits(n);
	return 0;
}
