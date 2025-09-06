#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> b[1001];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
int dist[1001];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    fill(dist, dist+1001, 1e9);
    
    int n, m, st, ed, u, v, w;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>u>>v>>w;
        b[u].push_back({v, w});
    }
    cin>>st>>ed;
    
    dist[st]=0;
    pq.push({0, st}); // {거리, 노드}
    
    while(!pq.empty()){
        auto cur = pq.top();
        int cost = cur.first;
        int node = cur.second;
        pq.pop();
        if (dist[node] < cost) continue;
        for(auto& next: b[node]){
            int nextCost = next.second;
            int nextNode = next.first;
            if(dist[nextNode]>dist[node]+nextCost) {
                dist[nextNode] = dist[node] + nextCost;
                pq.push({dist[nextNode], nextNode});
            }
        }
    }
    
    cout<<dist[ed];
}