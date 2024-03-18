#include <bits/stdc++.h>
using namespace std;

string input[101];
char board[101][101];
bool vis[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n;
int ret1 = 0;
int ret2 = 0;

void fill_vis(int n) {
	for (int i = 0; i < n; i++) {
		fill(vis[i], vis[i] + 101, false);
	}
	return;
}

void bfs(int i, int j, char c) {
	queue<pair<int, int>> q;
	q.push({ i,j });
	vis[i][j] = true;

	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny<0 || ny>=n)
				continue;
			if (board[nx][ny] != c || vis[nx][ny] == 1)
				continue;
			q.push({ nx, ny });
			vis[nx][ny] = true;
		}
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			board[i][j]=input[i][j];
		}
	}
	fill_vis(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == false) {
				bfs(i,j,board[i][j]);
				ret1++;
			}
		}
	}
	fill_vis(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vis[i][j] == false) {
				bfs(i,j,board[i][j]);
				ret2++;
			}
		}
	}
	cout << ret1 << ' ' << ret2;

}