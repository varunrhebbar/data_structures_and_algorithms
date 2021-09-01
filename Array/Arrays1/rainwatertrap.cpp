#include<bits/stdc++.h>
using namespace std;

int raintrap(int arr[], int n){
    int left[n], right[n];
    int totalwater = 0, i, currwater=0;
    left[0] = 0;
    right[n-1] = 0;
    for(int i=1; i<n; i++){
        left[i] = max(left[i-1], arr[i-1]);
    }
    for(int i=n-2; i>=0; i--){
        right[i] = max(right[i+1], arr[i+1]);
    }
    for(int i=0; i<n; i++){
        currwater = min(right[i], left[i]) - arr[i];
        if (currwater<0){
            currwater = 0;
        }
        totalwater += currwater;
    }
    return totalwater;
}

int main(){
    int arr[] = {1,0,1,2,1,0,3,1,2,3,4,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<raintrap(arr, n)<<endl;
    return 0;
}
