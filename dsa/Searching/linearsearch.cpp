//Linear search
#include<iostream>
using namespace std;

int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	
			if(arr[i]==x)
			return i;
			else
			return -1;
	

}
int main()
{
	
	int arr[]={1,2,3,4,5,6,7,8,90};
	int n=sizeof(arr)/sizeof(arr[0]);
	int x=10;
	cout<<"element found @ pos   ";
	
	cout<<search(arr,n,x);
	return 0;
}
