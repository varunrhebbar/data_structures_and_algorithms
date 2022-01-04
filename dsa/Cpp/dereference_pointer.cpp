#include<iostream>
#include<string>>

using namespace std;

int main()
{
	string name ="varun_hebbar";
	string *ptr=&name;
	cout<<*ptr<<endl;
	cout<<ptr;
	return 0;
}
