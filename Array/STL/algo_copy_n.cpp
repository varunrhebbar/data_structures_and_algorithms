#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[5]={9,8,7,6,5};
	int arr1[5];
	copy_n(arr,5,arr1);
	
	cout<<"New array"<<endl;
	for(int i=0;i<sizeof(arr);i++)
	cout<<arr[i]<<"";
	
	return 0;
}
