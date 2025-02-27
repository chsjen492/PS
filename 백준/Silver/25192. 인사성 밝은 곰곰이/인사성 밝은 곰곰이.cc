#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n, res = 0;
    string in;
    set<string> s;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>in;
        if(in=="ENTER"){
            res+=s.size();
            s.clear();
        }
        else {
            s.insert(in);
        }
    }
    res+=s.size();
    cout<<res;
}