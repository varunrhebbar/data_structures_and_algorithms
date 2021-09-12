#include <bits/stdc++.h>
using namespace std;
int binsearch(int arr[], int low, int high, int x)
{
	if (low<high)
	 {
		int mid = (low + high) / 2;

		if (arr[mid] == x)
			return mid;
			
		if (arr[mid] > x)
			return binsearch(arr, low, mid - 1, x);
			
		else return binsearch(arr, mid + 1, high, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 ,44,45,67,87,98,99,111,123};
	int x = 111;
	int n = sizeof(arr) / sizeof(arr[0]);
	int res = binsearch(arr, 0, n - 1, x);
	if(res == -1) 
      cout << "Element is not present in array";
 	else
	  cout << "Element is present at index " << res;
	return 0;
}

