#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, m;
    map<string, string> mp;
    string site, pwd;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        cin>>site>>pwd;
        mp[site]=pwd;
    }
    for(int i=0;i<m;i++){
        cin>>site;
        cout<<mp[site]<<'\n';
    }
}