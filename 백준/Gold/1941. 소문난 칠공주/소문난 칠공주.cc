#include <bits/stdc++.h>
using namespace std;
string input[5];
bool board[25] = {};
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int ret = 0;
    
    for(int i=0;i<5;i++){
        cin>>input[i];
    }
    fill(board+7, board+25, true);
    
    do {
        queue<pair<int, int>> q;
        int som = 0; int cnt = 0; bool is7[5][5] = {}; bool visited [5][5] = {};
        
        for(int i=0;i<25;i++){
            if(!board[i]){
                int x = i/5; int y = i%5;
                is7[x][y] = true;
                if(q.empty()){
                    q.push({x, y});
                    visited[x][y]=true;
                }
            }
        }
        
        while(!q.empty()){
            auto cur = q.front();
            q.pop();
            cnt++;
            som+=input[cur.first][cur.second]=='S';
            for(int i=0;i<4;i++){
                int nx = cur.first + dx[i];
                int ny = cur.second + dy[i];
                
                if(nx<0 || ny<0 || nx>=5 || ny>=5 || visited[nx][ny] || !is7[nx][ny]){
                    continue;
                }
                
                q.push({nx, ny});
                visited[nx][ny]=true;
            }
        }
        ret +=(cnt>=7&&som>=4);
    } while(next_permutation(board, board+25));
    
    cout<<ret;
}

