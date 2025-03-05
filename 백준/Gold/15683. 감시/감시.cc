#include <bits/stdc++.h>
using namespace std;
int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int room[9][9];
int cnt[9][9];

void move(int x, int y, int dir){
    dir%=4;
    while(true){
       x+=dx[dir];
       y+=dy[dir];
       if(x<0||y<0||x>=n||y>=m||cnt[x][y]==6)
            return;
        cnt[x][y]=-1;
    }
}

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    vector<pair<int, int>> v;
    int mn = 987654321;
    int res = 0;
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>room[i][j];
            
            if(room[i][j]>0&&room[i][j]<6){
                v.push_back({i, j});
            }
        }
    }
    
    for(int tmp = 0; tmp< (1<<(2*v.size())); tmp++){
        int brute = tmp;
        res = 0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cnt[i][j]=room[i][j];
            }
        }
        
        for(int i=0;i<v.size();i++){
            int dir = brute%4;
            brute/=4;
            
            int x = v[i].first;
            int y = v[i].second;
            
            if(room[x][y]==1){
                move(x, y, dir);
            }
            else if(room[x][y]==2){
                move(x, y, dir);
                move(x, y, dir+2);
            }
            else if(room[x][y]==3){
                move(x, y, dir);
                move(x, y, dir+1);
            }
            else if(room[x][y]==4){
                move(x, y, dir);
                move(x, y, dir+1);
                move(x, y, dir+2);
            }
            else if(room[x][y]==5){
                move(x, y, dir);
                move(x, y, dir+1);
                move(x, y, dir+2);
                move(x, y, dir+3);
            }
        }
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(cnt[i][j]==0){
                    res++;
                }
            }
        }
        mn = min(mn, res);
    }
    
    cout<<mn;
}