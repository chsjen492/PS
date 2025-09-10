#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
char d[4] = {'d', 'l', 'r', 'u'};

int _n, _m, _r, _c, _k;
string answer = "impossible";
bool flag = false;
char path[2501];
bool visited[51][51][2501];

int getDist(int x, int y){
    return abs(_r-x)+abs(_c-y);
}

void dfs(int cx, int cy, int len){
    if(flag) return;
    if(visited[cx][cy][len]) return;
    visited[cx][cy][len] = true;

    for(int i=0;i<4;i++){
        int nx = cx + dx[i];
        int ny = cy + dy[i];
        if(nx<=0 || ny<=0 || nx>_n || ny>_m) continue;

        int remain = _k - (len + 1);
        int dist = getDist(nx, ny);

        if(remain < dist) continue;
        if((remain - dist) % 2 != 0) continue;

        path[len] = d[i];

        if(nx==_r && ny==_c && len+1==_k){
            path[len+1] = '\0';
            answer = string(path);
            flag = true;
            return;
        }

        dfs(nx, ny, len+1);
    }
}

string solution(int n, int m, int x, int y, int r, int c, int k) {
    _n = n; _m = m; _r = r; _c = c; _k = k;
    int dist = getDist(x,y);
    if(dist > k || (k - dist) % 2 != 0) return "impossible";
    dfs(x, y, 0);
    return answer;
}
