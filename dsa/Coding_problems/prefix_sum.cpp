#include<bits/stdc++.h>
using namespace std;

void Prefix(int arr[],int n,int prefix_sum[])
{
	prefix_sum[0]=arr[0];
	
	for(int i=1;i<n;i++)
	prefix_sum[i]=prefix_sum[i-1]*arr[i];
	
}

int main()
{
    int arr[] = {-45,-89,20,33,45,78 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int prefix_sum[n];
    Prefix(arr, n, prefix_sum);
    for (int i = 0; i < n; i++)
        cout << prefix_sum[i] << " ";
}
