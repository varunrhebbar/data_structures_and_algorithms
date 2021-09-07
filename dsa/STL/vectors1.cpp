#include<iostream>
#include<algorithm>
#include<vector>
#define ll long long

using namespace std;

int main()
 {
	vector<int> vec={10, 20, 30, 40, 50};
	vector<int>::iterator i = v.begin();
	cout<<(*i)<<" ";
	i++;
	cout<<(*i)<<" ";
	i = vec.end();
	i--;
	cout<<(*i);
    
    return 0;
}
