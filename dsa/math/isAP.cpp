#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isap(int arr[],int n)
{
	if(n==1)
	return true;
	sort(arr,arr+n);
	int d=arr[1]-arr[0];
	 for (int i = 2; i < n; i++)
		if(arr[i]-arr[i-1]!=d)
		return false;
	return true;
}
//int main()
//{
//	int arr[5]={1,3,5,6,9};
//	int n = sizeof(arr) / sizeof(arr[0]);
//	(isap(arr, n)) ? (cout << "Yes" << endl) : (cout << "No" << endl);
// 	return 0;
//}
int main()
{
	int sizeofarray;
	cin <<sizeofarray;
	for (int i = 0; i < sizeofarray; ++i)
	{
	    cin >> a[i];
	}	
	for (int i = 0; i < sizeofarray; ++i)
{
    cin >> a[i];
}
}

