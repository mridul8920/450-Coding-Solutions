#include<bits/stdc++.h>
using namespace std;

vector<int> smallestGreaterEle(int arr[],int n){
vector<int>v;
stack<int>s;
s.push(arr[n-1]);
v.push_back(-1);
for(int i=n-2;i>=0;i--){
    while(!s.empty() and s.top()>=arr[i])
    s.pop();
    int ns=s.empty()?-1:s.top();
    v.push_back(ns);
    s.push(arr[i]);
    }
    reverse(v.begin(),v.end());
return v;
}

int main(){
    int arr[]= {11, 13, 21, 3};
    int n=4;
    // arr[n];
    vector<int>v=smallestGreaterEle(arr,n);
    for(auto i: v)
    cout<<i<<" ";

    return 0;
}
