#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int a ,int b)
{
	int temp= a;
	a=  b;
	b= temp;
}

void selectionsort(int arr[],int n)
{
	int i,j,min;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		if(arr[j]<arr[min])
		min=j;
		swap(arr[min],arr[i]);
	}	
}
void printarray(int arr[],int size)
{
	int i;
	for(int i=0;i<size;i++)
	cout<<arr[i]<<" ";
}


int main()
{
	int arr[]={22,33,11,12,10,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	selectionsort(arr,n);
	printarray(arr,n);
	return 0;
}

