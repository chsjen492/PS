#include<bits/stdc++.h>
using namespace std;

int board[51][51];
int cnt = 0;

int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int r, c, d;

	cin >> n >> m;
	cin >> r >> c >> d;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	while (1) {
		if (board[r][c] == 0) {
			board[r][c] = -1;
			cnt++;
		}
		bool found = false;

		for (int i = 0; i < 4; i++) {
			d = (d + 3) % 4;
			int nx = r + dx[d];
			int ny = c + dy[d];
			if (board[nx][ny] == 0) {
				r = nx;
				c = ny;
				found = true;
				break;
			}
		}

		if (!found) { //빈칸이 없는 경우

			int tmp = (d + 2) % 4;

			int nx = r + dx[tmp];
			int ny = c + dy[tmp];

			if (nx >= 0 && ny >= 0 && nx < n && ny < m && board[nx][ny] != 1) {
				r = nx;
				c = ny;
			}
			else {
				break;
			}
		}

	}

	cout << cnt;
}