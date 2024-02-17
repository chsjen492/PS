#include <bits/stdc++.h>
using namespace std;

string m[1001]; //입력
int f_dist[1001][1001]; //불이 번지는 시간
int j_dist[1001][1001]; //지훈이가 이동하는 시간
int dx[4] = { 1,0,-1,0 }; //이동
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r, c;
	cin >> r >> c;
	queue<pair<int, int>> fire; 
	queue<pair<int, int>> J;
	string s;

	for (int i = 0; i < r; i++) {
		cin >> m[i];
	}
	for (int i = 0; i < r; i++) { //각 거리 -1로 채우기
		fill(j_dist[i], j_dist[i] + c, -1);
		fill(f_dist[i], f_dist[i] + c, -1);
	}
	
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (m[i][j] == 'J') { //지훈이의 시작점 큐에 넣기
				J.push({ i,j });
				j_dist[i][j] = 0;
			}
			if (m [i][j] == 'F') { //불의 시작점 큐에 넣기
				fire.push({ i,j });
				f_dist[i][j] = 0;
			}
			
		}
	}

	while (!fire.empty()) { //불 BFS
		pair<int, int> cur = fire.front();
		fire.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) //미로의 밖을 벗어날 시 continue
				continue;
			if (f_dist[nx][ny]>=0||m[nx][ny]=='#') //방문한 곳에 왔거나 벽에 도착했을 시 continue
				continue;
			f_dist[nx][ny] = f_dist[cur.first][cur.second] + 1; //불이 번지는 시간
			fire.push({ nx,ny }); 

		}
	}

	
	while (!J.empty()) { //지훈이의 이동
		pair<int, int> cur = J.front();
		J.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c) //미로의 밖으로 벗어났을 경우 탈출한 것이기 때문에 탈출 시간 출력 후 종료
			{
				cout << j_dist[cur.first][cur.second] + 1;
				return 0;
			}
			if (m[nx][ny] == '#' || j_dist[nx][ny] >= 0) //이미 이동한 곳이거나 벽에 도착했을 시 continue
				continue;
			if (f_dist[nx][ny]!=-1&&f_dist[nx][ny] <= j_dist[cur.first][cur.second]+1) //불이 닿지 않는 곳으로 갔거나 불이 먼저 도착한 경우 continue
				continue;
			j_dist[nx][ny] = j_dist[cur.first][cur.second] + 1;
			J.push({ nx,ny });

		}
	}
	cout << "IMPOSSIBLE"; //탈출 실패시 여기로 와서 impossible 출력

}