#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int f, s, g, u, d;
    cin>>f>>s>>g>>u>>d;
    int dx[2] = {u, -d};
    bool vis[1000001]={};
    
    if(s==g){
        cout<<0;
        return 0;
    }
    
    queue<pair<int, int>> q;
    q.push({s, 0});
    vis[s]=true;
    
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        
        for(int i=0;i<2;i++){
            int nx = cur.first + dx[i];
            
            if(nx>f || nx<1 || vis[nx]) continue;
            if(nx==g){
                cout<<cur.second+1;
                return 0;
            }
            q.push({nx, cur.second+1});
            vis[nx]=true;
        }
    }
    cout<<"use the stairs";
}