#include<iostream>
using namespace std;

void rotatearray(int arr[],n,d)
{
	int temp=arr[0],i;
	for (int i=0;i<n-1;i++)
	arr[i] = arr[i + 1];
    arr[n-1] = temp;
}
