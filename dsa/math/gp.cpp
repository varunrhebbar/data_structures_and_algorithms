#include<iostream>
#include<math.h>
using namespace std;

void gp(int a,int r,int n)
{
	int temp;
	for(int i=0;i<=n;i++)
	{
		temp=a*pow(r,i);
		cout<<temp<<",";
	}
}
int main()
{
	int a,r,n;
	cin>>a;
	cin>>r;
	cin>>n;
	gp(a,r,n);
	return 0;
}
//GP=a*r^(n-1)
