#include <bits/stdc++.h>
using namespace std;
int n, m, h;
int box[101][101][101];
int cnt = 0;
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int mx = 0;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    bool flag = true;
    queue<tuple<int, int, int, int>> q;
    cin>>m>>n>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<m;k++){
                cin>>box[i][j][k];
                if(box[i][j][k]==0){
                    flag=false;
                    cnt++;
                }
                if(box[i][j][k]==1){
                    q.push({i, j, k, 0});
                }
            }
        }
    }
    
    if(flag){
        cout<<0;
        return 0;
    }
    
    while(!q.empty()){
        auto [z, x, y, d] = q.front(); q.pop();
        mx = max(mx, d);
        
        for(int i=0;i<6;i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            int nz = z+dz[i];
            
            if(nx<0||ny<0||nz<0||nx>=n||ny>=m||nz>=h||box[nz][nx][ny]!=0)
                continue;
            box[nz][nx][ny]=1;
            cnt--;
            q.push({nz, nx, ny, d+1});
        }
    }
    if(cnt==0)
        cout<<mx;
    else
        cout<<-1;
}