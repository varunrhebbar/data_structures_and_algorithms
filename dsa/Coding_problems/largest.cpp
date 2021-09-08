#include <bits/stdc++.h>
using namespace std;

int largest(int arr[], int n)
{
	int max = arr[0];

	for (int i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
	int arr[] = {1,2,34,5,6,7,8,9,999};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Largest element is "<<largest(arr, n);
	return 0;
}

//TC -o(n)

