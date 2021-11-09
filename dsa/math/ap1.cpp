#include <bits/stdc++.h>
using namespace std;

bool checkIsAP(int arr[], int n)
{
	if (n == 1)
		return true;
	sort(arr, arr + n);

	int d = arr[1] - arr[0];
	for (int i = 2; i < n; i++)
		if (arr[i] - arr[i - 1] != d)
			return false;

	return true;
}

int main()
{
	int arr[] = { 20, 15, 5, 0, 10 };
	int n = sizeof(arr) / sizeof(arr[0]);

	(checkIsAP(arr, n)) ? (cout << "Yes" << endl) : (cout << "No" << endl);

	return 0;
}

