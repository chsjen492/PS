#include <bits/stdc++.h>
using namespace std;
int n, e, a, b, c, v1, v2;
const int INF = 0x3f3f3f3f;
vector<pair<int, int>> adj[801];
int d[801];

long long solve(int start, int end){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    fill(d, d+n+1, INF);
    d[start]=0;
    pq.push({d[start], start});
    
    while(!pq.empty()){
        int u, v, w, dw;
        tie(w, u) = pq.top();
        pq.pop();
        
        if(d[u] != w)
            continue;
        for(auto next : adj[u]){
            tie(dw, v) = next;
            dw +=w;
            if(dw< d[v]){
                d[v]=dw;
                pq.push({dw, v});
            }
        }
    }
    return d[end];
}
int main()
{
    
    
    cin>>n>>e;
    for(int i=0;i<e;i++){
        cin>>a>>b>>c;
        adj[a].push_back({c, b});
        adj[b].push_back({c, a});
    }
    
    cin>>v1>>v2;
    long long a1 = solve(1, v1)+solve(v1, v2) + solve(v2, n);
    long long a2 = solve(1, v2)+solve(v2, v1) + solve(v1, n);
    long long ans = min(a1, a2);
    
    if(ans>=INF)
        ans=-1;
    cout<<ans;
}