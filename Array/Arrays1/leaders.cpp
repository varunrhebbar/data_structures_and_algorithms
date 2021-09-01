// Leaders of an array.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void leaders(vector<int> a){
    int i,j;
    vector<int> res;
    for(i=0;i<a.size()-1;i++){
        for(j=i+1;j<a.size();j++){
            if(a[i] >= a[j]){
                if(j == a.size()-1){
                    res.push_back(a[i]);
                }
            }
            else break;
        }
    }
    res.push_back(a[a.size()-1]);
    for(i=0; i<res.size(); i++)
    {
        cout<<res[i]<<"\t";
    }
}
int main(){
    vector<int> a {5,3,20,15,8,3};  // op--> {20, 15, 8, 3}
    leaders(arr);
    return 0;
}
