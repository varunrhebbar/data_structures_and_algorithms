#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "varun_r_hebbar";
	cout << str << endl;
	str.resize(6);
	cout << "The string after resize operation is : ";
	cout << str << endl;
	cout << "The capacity of string is : ";
	cout << str.capacity() << endl;
	cout << "The length of the string is :" << str.length()<< endl;
	return 0;
}

