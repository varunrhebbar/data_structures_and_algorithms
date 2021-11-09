#include <bits/stdc++.h>
using namespace std;

int countDigit(long n)
{
	if (n/10 == 0)
		return 1;
	return 1 + countDigit(n / 10);
}
int main(void)
{
	 long n = 345289467;
	cout << "Number of digits :" << countDigit(n);
	return 0;
}


