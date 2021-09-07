#include<iostream>
using namespace std;
int equi(int arr[],int n)
{
	int l=arr[0];
	int r=arr[n];
	for(int i=0;i<n;i++)
	{
	int l_sum=0;
	int	r_sum=0;
	for(int j=0;j<i;j++)
		{
	
		l_sum+=arr[j];
		for(int k=i+1;k<n;k++)
			{

			r_sum+=arr[k];
			if(l_sum=r_sum) 
			cout<<"True"<<endl;
			else 
			cout<<"False";
			}
		
		}
	}
}

int main()
{
	int arr[]={1,32,5,6,5,9,0,1};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout<<equi(arr,n);
	return 0;
}
