#include <bits/stdc++.h>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int board[1001][1001];
int cnt[1001][1001];
int w, h;

void bfs(queue<tuple<int, int, int>> q){
    while(!q.empty()){
        auto cur = q.front();
        q.pop();
            
        int who = get<2>(cur);
            
        for(int j=0;j<4;j++){
            int nx = get<0>(cur) + dx[j];
            int ny = get<1>(cur) + dy[j];
                
            if(who==1&&(nx<0||nx>=h||ny<0||ny>=w)){
                cout<<cnt[get<0>(cur)][get<1>(cur)]+1<<'\n';
                return;
            }
            if(nx<0||nx>=h||ny<0||ny>=w)
                continue;
            if(board[nx][ny]==-1 || board[nx][ny]==1 || (who==1&&board[nx][ny]==2))
                continue;
            if(who==1){
                cnt[nx][ny] = cnt[get<0>(cur)][get<1>(cur)]+1;
                board[nx][ny]=2;
            }
            else
                board[nx][ny]=1;
            q.push({nx, ny, who});
        }
    }
    cout<<"IMPOSSIBLE\n";
    return;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    char c;
    
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>w>>h;
        tuple<int, int, int> start;
        queue<tuple<int, int, int>> q;
        
        for(int j=0;j<h;j++){
            for(int k=0;k<w;k++){
                cin>>c;
                if(c=='.'){
                    board[j][k]=0;
                }
                if(c=='#'){
                    board[j][k]=-1;
                }
                if(c=='*'){
                    q.push({j, k, 0});
                    board[j][k]=1;
                }
                if(c=='@'){
                    start={j, k, 1};
                    board[j][k]=2;
                    cnt[j][k]=0;
                }
            }
        }
        
        q.push(start);
        
        bfs(q);
    }
    
}