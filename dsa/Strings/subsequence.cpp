#include <iostream>
#include<string>
using namespace std;

void printSubsequence(string input, string output)
{
	if (input.empty())
	 {
		cout << output << endl;
		return;
	}
	printSubsequence(input.substr(1), output + input[0]);//with 1st char
	printSubsequence(input.substr(1), output);//witout 1st char
}

int main()
{

	string output = "";
	string input = "varun";
	printSubsequence(input, output);
	return 0;
}

