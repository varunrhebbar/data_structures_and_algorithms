#include<iostream>
using namespace std;

void powerset(int n,string str)

{
	int count =(1<<n);
	for(int i=0;i<count;i++)
	{
		for(int j=0;j<n;j++)
		if((i&(1<<j))>0)
		cout<<str[j]<<endl;
		
	}
}
int main()
{
	int n=3;
	string str="ABC";
	powerset(n,str);
	return 0;
}
