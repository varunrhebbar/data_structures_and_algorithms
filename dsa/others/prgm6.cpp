#include<iostream>
using namespace std;

void reversal(int arr[], int n)
{
    int temp[n];
    if (arr[0] == NULL)
    {
        return;
    }
    int first = arr[0];
    for(int i=1; i<n; i++)
    {
        temp[i-1] = arr[i];
    }
    reversal(temp, n-1);
    cout << first << "\t" ; 
}
int main()
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    reversal(arr, n);
}
