#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    vector<int> v;
    int n, t;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t);
    }
    vector<int> uni = v;
    sort(uni.begin(), uni.end());
    uni.erase(unique(uni.begin(), uni.end()), uni.end());
    
    for(int i=0;i<v.size();i++){
        cout<<lower_bound(uni.begin(), uni.end(), v[i])-uni.begin()<<" ";
    }
}