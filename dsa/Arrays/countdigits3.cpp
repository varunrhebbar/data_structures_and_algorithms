#include<iostream>
#include<math.h>
using namespace std;

int  countdigits(int n)
{
	return floor(log10(n)+1);
}
int main()
{
	int n;
	countdigits(n);
	cin>>n;
	cout<<countdigits(n);
	return 0;
}
