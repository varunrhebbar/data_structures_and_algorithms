#include <iostream>
#include <string>
using namespace std;

int main()
{
	string varun;
	getline(cin, varun);
	
	cout << "The initial string is ";
	cout << varun << endl;

	varun.push_back('h');

	cout << "The string after push_back operation is : ";
	cout << varun << endl;


	return 0;
}

