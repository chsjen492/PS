#include <bits/stdc++.h>
using namespace std;

int board[301][301];
int dist[301][301];
int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = { -1, 1, -2, 2, -2, 2, -1, 1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t, i;
	int nx, ny;
	int px, py;
	cin >> t;
	while (t--) {
		queue<pair<int, int>> q;

		cin >> i;
		cin >> nx >> ny;
		cin >> px >> py;
		for (int j = 0; j < i; j++) {
			fill(dist[j], dist[j] + i, -1);
		}
		dist[nx][ny] = 0;
		q.push({ nx, ny });
		while (!q.empty()) {
			auto cur = q.front();
			q.pop();
			for (int j = 0; j < 8; j++) {
				int x = cur.first + dx[j];
				int y = cur.second + dy[j];
				if (x < 0 || x >= i || y >= i || y < 0)
					continue;
				if (dist[x][y] >= 0)
					continue;
				q.push({ x,y });
				dist[x][y] = dist[cur.first][cur.second] + 1;

			}
		}

		cout << dist[px][py] << '\n';

	}
}