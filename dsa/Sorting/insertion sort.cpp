#include<iostream>
using namespace std;
int insertion(int arr[],int n)
{
	int i, j ,key;
	for(i=1; i<n; i++)
	{
		key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
				arr[j+1]=arr[j];
				j=j-1;
		}
		arr[j+1]= key;	
	}
 } 
 void print(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 int main()
 {
 	int arr[]= {8,9,6,2,10};
 	int n=sizeof(arr)/sizeof(arr[0]);
 	insertion(arr,n);
 	print(arr,n);
    return 0;
}















