#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str="varunrhebbar";
	std::string ::iterator it;
	for(it=str.begin();it!=str.end();it++)
	cout<<*it;
	cout<<endl;
	std::string::reverse_iterator it1;
	for(it1= str.rbegin(); it1!= str.rend(); it1++)
	cout<<*it1;
	return 0;
}
