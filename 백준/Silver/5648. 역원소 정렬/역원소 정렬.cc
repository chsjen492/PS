#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n;
    string tmp;
    vector<long long> v;
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>tmp;
        reverse(tmp.begin(), tmp.end());
        
        v.push_back(stoll(tmp));
    }
    
    sort(v.begin(), v.end());
    
    for(int i=0;i<n;i++){
        cout<<v[i]<<'\n';
    }
}