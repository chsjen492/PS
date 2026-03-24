#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n, m;
    int k, s, e;
    map<int, int> reserved;
    
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        cin>>k>>s>>e;
        if(reserved[k]<=s){
            reserved[k] = e;
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}