#include<iostream>

using namespace std;

bool isPowerOfFour( int n)
{
	int count = 0;

	if ( n && (!n&(n-1)) )
	{
		while(n > 1)
		{
			n >>= 1;
			count += 1;
		}
		return (count%2 == 0)? 1 :0;
	}
	return 0;
}
int main()
{
	int test_no = 81;
	if(isPowerOfFour(test_no))
		cout << test_no << " is a power of 4" ;
	else
		cout << test_no << " is not a power of 4";
}
