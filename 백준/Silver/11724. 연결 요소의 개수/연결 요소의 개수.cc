#include <bits/stdc++.h>
using namespace std;
bool used[1001];
vector<vector<int>> g(1001);
int n, m, u, v;
int cnt = 0;

void func(int x){
    used[x]=true; 
    for(int i=0;i<g[x].size();i++){
        if(!used[g[x][i]]) {
            func(g[x][i]);
        }
    }
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    
    for(int i=1;i<=n;i++){
        if(!used[i]){
            cnt++;
            func(i);
        }
    }
    cout<<cnt;
}