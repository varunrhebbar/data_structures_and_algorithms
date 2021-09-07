//#include<iostream>
//using namespace std;
//int main(){
//	int fact(int n)
//	{
//		if(n==0)
//		retrun 1;
//		else n*fact(n-1);
//		
//	}
//}
//int main(){
//	int n=3;
//	cout<< n ;
//}


#include <iostream>
using namespace std;


int factorial( int n)
{
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main()
{
	int num = 5;
	cout << "Factorial of "	<< num << " is " << factorial(num) << endl;
	
	return 0;
}



