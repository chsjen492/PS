#include <bits/stdc++.h>
using namespace std;
int n, m, h, a, b;
bool board[32][21]={};
int ret = 987654321;
vector<pair<int, int>> v;

bool check(){
    for(int i=1;i<=n;i++){
        int cur = i;
        for(int j=1;j<=h;j++){
            if(board[j][cur-1]) cur--;
            else if(board[j][cur]) cur++;
        }
        if(cur!=i) return false;
    }
    return true;
}

void func(int mx, int x, int start){
    if(x>mx) return;
    
    if(check()){
        ret = min(ret, x);
        return;
    }
    
    for(int i=start;i<v.size();i++){
        int a = v[i].first; int b = v[i].second;
        if(board[a][b]) continue;
        board[a][b] = true;
        func(mx, x+1, i+1);
        board[a][b] = false;
    }
    
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    
    cin>>n>>m>>h;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        board[a][b]=true;
    }
    
    if(check()){
        cout<<0;
        return 0;
    }
    
    for(int i=1;i<=h;i++){
        for(int j=1;j<n;j++){
            if(board[i][j-1]||board[i][j]||board[i][j+1]) continue;
            v.push_back({i,j});
        }
    }
    
    func(3, 0, 0);

    if(ret>3) cout<<-1;
    else cout<<ret;
    
    
}