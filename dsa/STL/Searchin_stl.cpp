//Search using STL
#include <algorithm>
#include <iostream>
using namespace std;

void search(int a[], int n)
{
	for (int i = 0; i < n; ++i)
		cout << a[i] << ",";
}

int main()
{
	int a[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int asize = sizeof(a) / sizeof(a[0]);
	cout << "The array is - \n";
	search(a, asize);
	cout<<"\n After sorting"<<endl;
	sort(a, a + asize);
	if (binary_search(a, a + 10, 2))
		cout << "\nElement found in the array ";
	else
		cout << "\nElement not found in the array";
	return 0;
}

