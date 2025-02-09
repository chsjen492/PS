#include <bits/stdc++.h>
using namespace std;
int n, m;
int board[1001][1001];
int res[1001][1001];
bool vis[1001][1001];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    queue<pair<int, int>> q;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        fill(res[i], res[i]+m+1, -1);
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
            if(board[i][j]==2){
                q.push({i, j});
                res[i][j]=0;
                vis[i][j]=true;
            }
            if(board[i][j]==0){
                res[i][j]=0;
            }
        }
    }
    
    while(!q.empty()){
        auto cur = q.front(); q.pop();
        int x = cur.first;
        int y = cur.second;
        
        for(int i=0;i<4;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            
            if(nx<0||ny<0||nx>=n||ny>=m||vis[nx][ny])
                continue;
            if(board[nx][ny]==0)
                continue;
            res[nx][ny] = res[x][y]+1;
            q.push({nx, ny});
            vis[nx][ny]=true;
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<'\n';
    }
}