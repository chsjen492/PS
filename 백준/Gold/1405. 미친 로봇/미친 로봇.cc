#include <bits/stdc++.h>
using namespace std;
double m[4];
bool visited[31][31];
int dx[4]={1, -1, 0, 0};
int dy[4]={0, 0, -1, 1};
vector<double> ret;
int n;

void func(int cnt, int x, int y, double now){
    if(cnt==n){
        ret.push_back(now);
        return;
    }
    
    for(int i=0;i<4;i++){
         if(m[i] == 0) continue;
         int nx = x + dx[i];
         int ny = y + dy[i];
         if(visited[nx][ny]==true) continue;
         visited[nx][ny]=true;
         func(cnt+1, nx, ny, now*m[i]);
         visited[nx][ny] = false;
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<4;i++){
        cin>>m[i];
        m[i]*=0.01;
    }

    visited[15][15]=true;
    func(0, 15, 15, 1.0);
    double answer = 0;

    for(int i=0;i<ret.size();i++){
        answer += ret[i];
    }

    cout.precision(10);
    cout<<fixed<<answer;
}