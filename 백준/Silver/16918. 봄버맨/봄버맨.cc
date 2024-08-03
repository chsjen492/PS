#include<bits/stdc++.h>
using namespace std;

char board[201][201];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int r, c, n;
	queue <pair<int, int>> q;

	cin >> r >> c >> n;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0) {
			while (!q.empty()) {
				auto cur = q.front();
				board[cur.first][cur.second] = '.';
				q.pop();
				for (int j = 0; j < 4; j++) {
					int nx = cur.first + dx[j];
					int ny = cur.second + dy[j];
					if (nx<0 && ny<0 && nx>r && ny>c)
						continue;
					board[nx][ny] = '.';
				}

			}
		}
		else {
			for (int j = 0; j < r; j++) {
				for (int k = 0; k < c; k++) {
					if (board[j][k] == '.') {
						board[j][k] = 'O';
					}
					else {
						q.push({ j,k });
					}
				}
			}
		}
	}

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << board[i][j];
		}
		cout << "\n";
	}
	
}