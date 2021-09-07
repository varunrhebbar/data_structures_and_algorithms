#include <iostream>
using namespace std;

int maxSum(int arr[], int n, int k)
{
	int max_sum = INT_MIN;
	for (int i = 0; i < n - k + 1; i++)
	 {
		int current_sum = 0;
		for (int j = 0; j < k; j++)
		current_sum = current_sum + arr[i + j];
		max_sum = max(current_sum, max_sum);
	}

	return max_sum;
}

int main()
{
	int arr[] = {1,2,46,7,7,3,2,7,-90,0,0 };
	int k = 5;
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << maxSum(arr, n, k);
	return 0;
}

