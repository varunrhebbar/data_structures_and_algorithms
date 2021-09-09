//for only 1 odd element
#include <iostream>
using namespace std;

int oddocc(int arr[], int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)	
		res = res ^ arr[i];
	
	return res;
}

int main()
{
	int arr[] = {1,1,2,2,3,3,4,4,5,5,6,7,7,7,7,8,8,8,8};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << oddocc(arr, n);
	
	return 0;
}

