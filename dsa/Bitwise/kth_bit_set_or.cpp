#include<iostream>
using namespace std;
int kthbit(int n, int k)
{
	if(n&(1<<(k-1))!=0)
	cout<<"True"<<endl;
	else 
	cout<<"False0";
	
}
int main()
{
	int n=9;
	int k=2;
	kthbit(n,k);
	return 0;
}
