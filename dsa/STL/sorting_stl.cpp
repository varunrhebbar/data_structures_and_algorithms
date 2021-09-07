// C++ program to sort an array

#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
}

int main()
{
	int a[] = { 2,4,6,9,8,7,5,8,8,7,11 };
	int asize = sizeof(a) / sizeof(a[0]);
	sort(a, a+asize);
	cout << "The array after sorting is :\n";
	sort(a, asize);
	return 0;
}

