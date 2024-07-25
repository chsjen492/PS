#include <iostream>
#include <vector>
#include <queue>
#include <tuple>
#include <algorithm>
using namespace std;

int board[201][201];
int dist[201][201][31];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int hdx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int hdy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

int main() {
	ios::sync_with_stdio(false);
    cin.tie(0);

    int k, w, h;
    queue <tuple<int, int, int>> q;

    cin>>k;
    cin>>w>>h;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin>>board[i][j];
        }
    }
    for (int i = 0; i < 201; ++i) {
        for (int j = 0; j < 201; ++j) {
            fill(dist[i][j], dist[i][j] + 31, -1);
        }
    }
    q.push({0,0,0});
    dist[0][0][0]=0;

    while(!q.empty()){
        int x = get<0>(q.front());
        int y = get<1>(q.front());
        int ability = get<2>(q.front());
        q.pop();

        if(x==h-1&&y==w-1){
            cout<<dist[x][y][ability];
            return 0;
        }

        if(ability<k){
            for(int dir=0;dir<8;dir++){
                int nx = x+hdx[dir];
                int ny = y+hdy[dir];
                if(nx<0 ||ny<0||nx>=h||ny>=w || board[nx][ny]==1||dist[nx][ny][ability+1]!=-1)
                    continue;
                dist[nx][ny][ability+1]=dist[x][y][ability]+1;
                q.push({nx, ny, ability+1});

            }
        }
        for(int dir=0;dir<4;dir++){
                int nx = x+dx[dir];
                int ny = y+dy[dir];
                if(nx<0 ||ny<0||nx>=h||ny>=w || board[nx][ny]==1||dist[nx][ny][ability]!=-1)
                    continue;
                dist[nx][ny][ability]=dist[x][y][ability]+1;
                q.push({nx, ny, ability});

            }
    }

    cout<<-1;
    return 0;


}