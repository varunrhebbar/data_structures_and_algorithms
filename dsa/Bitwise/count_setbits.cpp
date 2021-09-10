#include<iostream>
using namespace std;
class varun
{
public:
int setbits(int n)
	{
	int res=0;
	while(n>0)
		{
			n &= (n - 1);
			res++;
		}
	return res;
	
	}
};

int main()
{
	varun v;
	int n=16;
	cout<<v.setbits(n);
	return 0;
}
