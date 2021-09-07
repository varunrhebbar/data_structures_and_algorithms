#include<iostream>
using namespace std;

int Prefix(int arr[],int n,int prefix_sum[])
{
	prefix_sum[0]=arr[0];
	
	for(int i=1;i<n;i++)
	prefix_sum[i]=prefix_sum[i-1]+arr[i]
	
}

int main()
{
    int arr[] = { 10, 4, 16, 20 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix[n];
 
    Prefix(arr, n, prefixSum);
    for (int i = 0; i < n; i++)
        cout << prefixSum[i] << " ";
}
