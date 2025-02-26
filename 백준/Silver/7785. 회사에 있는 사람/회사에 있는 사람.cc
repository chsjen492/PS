#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int n;
    cin>>n;
    
    string name, record;
    map<string, int, greater<string>> m;
    for(int i=0;i<n;i++){
        cin>>name>>record;
        
        if(record=="enter"){
            m.insert({name, 0});
        }
        else {
            m.erase(name);
        }
    }
    
    for(auto x : m){
        cout<<x.first<<'\n';
    }
}