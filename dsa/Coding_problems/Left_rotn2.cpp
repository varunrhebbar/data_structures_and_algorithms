
#include <iostream>
using namespace std;
void reversearray(int arr[], int l, int r)
{
	while (l<r)
	 {
		int temp = arr[l];
		arr[l] = arr[r];
		arr[r] = temp;
		l++;
		r--;
	}
}
void leftrotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	d = d % n;

	reversearray(arr, 0, d - 1);
	reversearray(arr, d, n - 1);
	reversearray(arr, 0, n - 1);
}

void printarray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int d = 2;
	leftrotate(arr, d, n);
	printarray(arr, n);

	return 0;
}

// TC -O(n)

