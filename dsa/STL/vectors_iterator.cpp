#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

int main()
 {
	vector<int> vec= {1,23,4,4,55,5,66,6,7};
	vector<int>::iterator i = vec.begin();
	cout<<(*i)<<" ";
	i++;
	cout<<(*i)<<" ";
	i = vec.end();
	i--;
	cout<<(*i);
    
    return 0;
}
