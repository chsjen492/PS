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
    sort(v.begin(), v.end());
    
    for(auto a : v){
        cout<<a<<'\n';
    }
}