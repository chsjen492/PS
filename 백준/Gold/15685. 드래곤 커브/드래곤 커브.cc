#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int n, x, y, d, g;
    int board[102][102]={0};
    int ret = 0;
    
    cin>>n;
    while(n--){
        cin>>x>>y>>d>>g;
        
        vector<int> v;
        v.push_back(d);
        board[y][x] = 1;
        
        while(g--){
            int size = v.size();
            
            for(int i=size-1;i>=0;i--){
                v.push_back((v[i]+1)%4);
            }
        }
        
        for(int i=0;i<v.size();i++){
            if(v[i]==0) board[y][++x] = 1;
            else if(v[i]==1) board[--y][x] = 1;
            else if(v[i]==2) board[y][--x] = 1;
            else board[++y][x] = 1;
        }
        
    }
    
    for(int i=0;i<101;i++){
        for(int j=0;j<101;j++){
            if(board[i][j]){
                if(board[i][j+1]&&board[i+1][j]&&board[i+1][j+1]) ret++;
            }
        }
    }
    
    cout<<ret;
}