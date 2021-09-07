
#include<iostream>
#include<list> 
using namespace std;
int main()
{
	list<int> varun;
	list<int>::iterator it= varun.begin();
	
	for (int i=1; i<=5; i++)
	varun.emplace_back(i);   // OP-1 2 3 4 5
	
	cout << "List after emplace_back operation is : ";
	for (int &x : varun) cout << x << " ";
	cout << endl;
	
	for (int i=10; i<=100; i+=10)
	varun.emplace_front(i);
	
cout << "List after emplace_front operation is : ";
	for (int &x : varun) cout << x << " ";
	cout << endl;
	advance(it,5);
	
// inserting element at 5th position using emplace()
	varun.emplace(it,100);
	
	// Displaying list elements
	cout << "List after emplace operation is : ";
	for (int &x : varun) cout << x << " ";
	cout << endl;
	
	return 0;
	
}

