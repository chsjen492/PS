#include <bits/stdc++.h>
using namespace std;
int n, pn, nd;
int dis[100001]={0,};
bool visited[100001];
vector<vector<int>> v;

void dfs(int x){
    visited[x]=true;
    for(int i=0;i<v[x].size();i++){
        int nx = v[x][i];
        if(!visited[nx]){
            dis[nx]=x;
            dfs(nx);
        }
    }
}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin>>n;
    v.resize(n+1);

    for(int i=0;i<n-1;i++){
        cin>>pn>>nd;
        v[pn].push_back(nd);
        v[nd].push_back(pn);
    }
    
    dfs(1);
    
    for(int i=2;i<=n;i++){
        cout<<dis[i]<<'\n';
    }
    
}