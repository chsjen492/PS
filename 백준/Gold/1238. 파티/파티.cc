#include <bits/stdc++.h>
using namespace std;

int n, m, x;
const int INF = 0x3f3f3f3f;
vector<pair<int, int>> adj[1001];
int dis[1001];

int solve(int start, int end){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    fill(dis, dis+n+1, INF);
    dis[start]=0;
    pq.push({dis[start],start});
    
    while(!pq.empty()){
        int u, v, w, dw;
        tie(w, u) = pq.top();
        pq.pop();
        
        if(dis[u] != w)
            continue;
        for(auto next : adj[u]){
            tie(dw, v) = next;
            dw +=w;
            if(dw<dis[v]){
                dis[v]=dw;
                pq.push({dw, v});
            }
        }
    }
    return dis[end];
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int s, e, t;
    cin>>n>>m>>x;
    for(int i=0;i<m;i++){
        cin>>s>>e>>t;
        adj[s].push_back({t, e});
    }
    int ans = 0;
    for(int i=1;i<=n;i++){
        ans=max(ans, solve(i, x)+solve(x, i));
    }
    cout<<ans;
}