#include <bits/stdc++.h>
using namespace std;

int dx[4] = {1,0,-1,0};
int dy[4] = {0, 1, 0, -1};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin>>n>>m;
    
    queue<tuple<int, int, int>> q;
    string arr[1001];
    int dist[1001][1001][2];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
        for(int j=0;j<m;j++) {
            dist[i][j][0]=dist[i][j][1]=-1;
        }
    }
    
    q.push(make_tuple(0,0,0));
    dist[0][0][0]=dist[0][0][1]=1;
    
    while(!q.empty()){
        int x, y, broken;
        tie(x, y, broken) = q.front();
        q.pop();
        if(x==n-1&&y==m-1){
            cout<<dist[x][y][broken];
            return 0;
        }
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            
            if(nx<0||nx>=n||ny<0||ny>=m)
                continue;
            if(arr[nx][ny]=='0' && dist[nx][ny][broken]==-1){
                dist[nx][ny][broken]= dist[x][y][broken]+1;
                q.push(make_tuple(nx, ny, broken));
            }
            if(arr[nx][ny]=='1' && !broken && dist[nx][ny][1]==-1){
                dist[nx][ny][1]=dist[x][y][broken]+1;
                q.push(make_tuple(nx, ny, 1));
                continue;
            }
            
            
            
        }
    }
    cout<<-1;
}