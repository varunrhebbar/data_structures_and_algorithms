#include<math.h>
#include<iostream>
using namespace std;

int count(int N)
{
	int count=0;
	while(N)
	{
		count++;
		N=N/10;
	}
	return count;
}
void cyclic(int N)
{
	int num=N;
	int n=count(N);
	while(1)
	{
		cout<<num<<endl;
		int rem = num % 10;
        int div = num / 10;
        num= (pow(10, n - 1))*rem+div;
        if(num==N)
        break;
	}
}
int main()
{
	int N;
	cin>>N;
	cyclic(N);
	return 0;
}
//cyclic numbers

