#include<iostream>
#include<list> 
using namespace std;
int main()
{
   
    list<int> gqlist1 = {1, 1, 1, 2, 2, 3, 3, 4};
      
  
    list<int> gqlist2 = {2, 4, 6};
      
  
    list<int>::iterator it = gqlist1.begin();
      

    advance(it, 3);
      
      

    cout << "list1 before unique operation is : ";
    for (int &x : gqlist1) cout << x << " ";
    cout << endl;
      
    gqlist1.unique();
      

    cout << "list1 after unique operation is : ";
    for (int &x : gqlist1) cout << x << " ";
    cout << endl << endl;
}
