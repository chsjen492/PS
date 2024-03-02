#include <bits/stdc++.h>
using namespace std;

int farm[51][51];
bool vis[51][51];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	queue<pair<int, int>> q;
	int cnt=0;
	
	int t, m, n, k, x, y;
	cin >> t;
	while (t--) {
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++) {
			cin >> x >> y;
			farm[y][x] = 1;
		}

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (farm[i][j] == 0 || vis[i][j])
					continue;
				else {
					cnt++;
					q.push({ i,j });
					vis[i][j] = true;
					while (!q.empty()) {
						auto cur = q.front();
						q.pop();
						for (int dir = 0; dir < 4; dir++) {
							int nx = cur.first + dx[dir];
							int ny = cur.second + dy[dir];
							if (nx < 0 || nx >= n || ny < 0 || ny >= m)
								continue;
							if(vis[nx][ny]||farm[nx][ny]!=1)
								continue;
							vis[nx][ny] = 1;
							q.push({ nx, ny });
						}
					}
				}
			}
			
		}
		cout<<cnt<<'\n';
		cnt = 0;
		for (int i = 0; i < n; i++) {
			fill(farm[i], farm[i] + m, 0);
			fill(vis[i], vis[i] + m, false);
		}
	}



}