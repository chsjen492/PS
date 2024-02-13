#include <bits/stdc++.h>
using namespace std;

int paper[501][501];
bool vis[501][501];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int cnt = 0, max_draw = 0, size = 0;;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> paper[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (paper[i][j] == 0 || vis[i][j])
				continue;
			queue<pair<int, int>> q;
			cnt++;
			size = 0;
			vis[i][j] = 1;
			q.push({ i,j });
			while (!q.empty()) {
				pair<int, int> cur = q.front();
				q.pop();
				size++;
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= n || ny < 0 || ny >= m)
						continue;
					if (vis[nx][ny] || paper[nx][ny] != 1)
						continue;
					vis[nx][ny] = 1;
					q.push({ nx,ny });
				}
			}
			if (max_draw < size) {
				max_draw = size;
			}
		}
	}
	cout << cnt << "\n" << max_draw;

}