#include<iostream>
using namespace std;

void combination(int arr[], int data[],	int start, int end, int index, int r);
void printcombination(int arr[], int n, int r)
{
	int data[r];
	combination(arr, data, 0, n-1, 0, r);
}
void combination(int arr[], int data[],
					int start, int end,
					int index, int r)
{
	if (index == r)
	{
		for (int j = 0; j < r; j++)
			cout << data[j] << " ";
		cout << endl;
		return;
	}
	for (int i = start; i <= end &&
		end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combination(arr, data, i+1,	end, index+1, r);
	}
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int r;
    cin>>r;
    int n = sizeof(arr)/sizeof(arr[0]);
    printcombination(arr, n, r);
}

