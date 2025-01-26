#include <bits/stdc++.h>
using namespace std;
int board[101][101];
bool visited[101][101];
int dist[101][101];
int n;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int answer = 99999999;

void num(){
    int cnt=1;
    queue<pair<int, int>> q;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]>0&&visited[i][j]!=1){
                q.push({i,j});
                visited[i][j]=1;
                
                 while(!q.empty()){
                    auto cur = q.front();
                    board[cur.first][cur.second]=cnt;
                    q.pop();
        
                    for(int k=0;k<4;k++){
                        int nx = cur.first+dx[k];
                        int ny = cur.second+dy[k];
            
                        if(nx<0||ny<0||nx>=n||ny>=n||visited[nx][ny]==1 || board[nx][ny]==0)
                            continue;
                        visited[nx][ny]=1;
                        q.push({nx, ny});
                    }
                }
                cnt++;
            }
        }
    }
    
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    queue<pair<int, int>> q;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>board[i][j];
            if(board[i][j]){
                dist[i][j]=0;
                q.push({i, j});
            }
        }
    }
    num();
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
                    
        for(int k=0;k<4;k++){
            int nx = cur.first+dx[k];
            int ny = cur.second+dy[k];
            
            if(nx<0||ny<0||nx>=n||ny>=n||board[nx][ny]==board[cur.first][cur.second])
                continue;
          
            if(board[nx][ny]!=0){
                answer = min(answer, dist[nx][ny]+dist[cur.first][cur.second]);
            }
            else{
                board[nx][ny]=board[cur.first][cur.second];
                dist[nx][ny] = dist[cur.first][cur.second]+1;
                visited[nx][ny]=1;
                            
                q.push({nx, ny});
            }
        }
    }
            

    cout<<answer;
}