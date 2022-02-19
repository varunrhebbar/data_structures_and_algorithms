#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1,string s2)
{
	int a1=s1.length();
	int a2=s2.length();
	if(a1!=a2)
		return false;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	for(int i=0;i<a1;i++)
		if(s1[i]=s2[i])
		return true;
		else 
		return false;	
}
int main()
{
    string s1;
    string s2;
    cout<<"Enter s1";
    getline(cin,s1);
    cout<<"Enter s2";
    getline(cin,s2);
    if (anagram(s1, s2))
        cout << "The two strings are anagram of each other";
    else
        cout << "The two strings are not anagram of each "
                "other";
 
    return 0;
}
