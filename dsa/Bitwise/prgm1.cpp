
#include<bits/stdc++.h>
using namespace std;

bool isAlphabet(char x)
{
	return ( (x >= 'A' && x <= 'Z') ||
			(x >= 'a' && x <= 'z') );
}

void reverse(char str[])
{
	int r = strlen(str) - 1, l = 0;

	while (l < r)
	{

		if (!isAlphabet(str[l]))
			l++;
		else if(!isAlphabet(str[r]))
			r--;

		else 
		{
			swap(str[l], str[r]);
			l++;
			r--;
		}
	}
}

int main()
{
	char str[] = "a!!!b.c.d,e'f,ghi";
	cout << "Input string: " << str << endl;
	reverse(str);
	cout << "Output string: " << str << endl;
	return 0;
}

