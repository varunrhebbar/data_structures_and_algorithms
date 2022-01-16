//#include<iostream>
//using namespace std;
//
//void combination(int arr[],int data[],int start,int end,int r,int index);
//void printcombination(int arr[],int n,int r)
//{
//	int data[r];
//	combination(arr,data,0,n-1,0,r);
//}
//void combination(int arr[],int data[],int start,int end,int index,int r)
//{
//	if(index==r)
//	{
//		for(int j=0;j<r;j++)
//		cout<<data[j]<<endl;
//	cout<<endl;
//	return ;
//	}
//	for(int i=start;i<=end && end-i+1>=r-index;i++)
//	{
//		data[index]=arr[i];
//		combination(arr,data,i+1,end,r,index+1);
//	}
//}
//int main()
//{
//		int n=5;
//		int arr[n];
//		cout<<"\n";
//		for(int k=0;k<n;k++)
//		{
//		cout<<"Enter "<<k+1<<" element: ";
//		cin>>arr[k];
//		}
//		int r;
//	cin>>r;
//    printcombination(arr, n, r);
//    return 0;
//}
