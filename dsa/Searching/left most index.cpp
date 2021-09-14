//wrong

#include <bits/stdc++.h>
using namespace std;
int left(int arr[], int low, int high, int x)
{
	if (low<high)
	 {
		int mid = (low + high) / 2;

		if (arr[mid] == x && (mid==0||arr[mid-1]!=x))
			return mid;
			
		if (arr[mid] >= x)
			return left(arr, low, mid - 1, x);
			
		else return left(arr, mid + 1, high, x);
	}
	return -1;
}

int main(void)
{
	int arr[] = {2,2,3,3,3,3,3};
	int x = 3;
	int n = sizeof(arr) / sizeof(arr[0]);
	int res = left(arr, 0, n - 1, x);
	if(res == -1) 
      cout << "Element is not present in array";
 	else
	  cout << "Element is present at index " << res;
	return 0;
}

