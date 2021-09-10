// C++ Program to Detect
// if two integers have opposite signs.
#include<iostream>

bool oppositeSigns(int x, int y)
{
	if ((x ^ y) < 0)
	return opp;
	else
	cout<<"not opposite";
}

int main()
{
	int x = 100;
	int y = -100;
	oppositeSigns(x,y);
	return 0;
}

