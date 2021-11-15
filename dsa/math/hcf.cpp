#include<iostream>
using namespace std;

int hcf(int a, int b)
{
	if(b==0)
	return a;
	return hcf(b, a%b);
}
int main()
{
	int a=10,b=15;
	cout<<"HCF of "<<a<<"and "<<b<< " is "<< hcf(a, b);;
	
	return 0;
}

