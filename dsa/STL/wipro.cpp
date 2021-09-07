#include<iostream>
using namespace std;

int main()
{
	
	int n;
	int l, r;
	cin>>n;
	int a[n];
	cin>>l>>r;
	for(int i=0;i<n;i++)
	 cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]<l || a[i]>r )
		{
			cout<<a[i]<<" ";
		}
	}

	return 0;
}
