#include <bits/stdc++.h>
using namespace std;
int board[301][301]={0};
bool visited[301][301];
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

void melting(){
    int sea[301][301]={0};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]){
                for(int dir=0;dir<4;dir++){
                    int nx = i+dx[dir];
                    int ny = j+dy[dir];
                    
                    if(nx>=0&&ny>=0&&nx<n&&ny<m&&board[nx][ny]==0){
                        sea[i][j]++;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            board[i][j]=max(0, board[i][j]-sea[i][j]);
        }
    }
}

// 0은 빙산 없음, 1은 나눠지지 않음, 2는 나눠짐
int bfs(){
    int x, y;
    int now = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(board[i][j]){
                x = i;
                y = j;
                now++;
            }
        }
    }
    
    if(now==0){
        return 0;
    }
    
    int after = 0;
    queue<pair<int, int>> q;
    q.push({x, y});
    visited[x][y]=true;
    
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
        after++;
        
        for(int i=0;i<4;i++){
            int nx = cur.first + dx[i];
            int ny = cur.second + dy[i];
            if(nx<0 || ny<0 || nx>=n || ny>=m)
                continue;
            if(visited[nx][ny] || board[nx][ny]==0)
                continue;
            q.push({nx, ny});
            visited[nx][ny]=true;
        }
    }
    
    if(now!=after){
        return 2;
    }
    else{
        return 1;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>board[i][j];
        }
    }
    
    int answer = 0;
    while(true){
        answer++;
        for(int i=0;i<n;i++){
            fill(visited[i], visited[i]+m, false);
        }
        melting();
        int ret = bfs();
        
        if(ret==0){
            cout<<0;
            return 0;
        }
        else if(ret==1){
            continue;
        }
        else{
            cout<<answer;
            return 0;
        }
    }
    
    
}