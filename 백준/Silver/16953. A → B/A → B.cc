#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long a, b;
    queue<pair<long long, long long>> q;
    cin>>a>>b;
    q.push({a, 0});
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        
        for(auto nx : {cur.first*2, cur.first*10+1}){
            if(nx>b)
                continue;
            if(nx==b){
                cout<<cur.second+2;
                return 0;
            }
            q.push({nx, cur.second+1});
        }
    }
    cout<<-1;
    return 0;
    
}