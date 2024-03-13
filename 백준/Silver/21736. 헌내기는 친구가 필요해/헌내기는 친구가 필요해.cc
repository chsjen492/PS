#include <bits/stdc++.h>
using namespace std;

string input[601];
bool vis[601][601];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	queue<pair<int, int>> q;
	string s;
	int cnt = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		input[i] = s;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (input[i][j] == 'I') {
				vis[i][j] = true;
				q.push({ i,j });
				break;
			}
		}
	}
	while (!q.empty()) {
		auto cur = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = cur.first + dx[i];
			int ny = cur.second + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (input[nx][ny] == 'X' || vis[nx][ny] == true)
				continue;
			if (input[nx][ny] == 'P')
				cnt++;
			vis[nx][ny] = true;
			q.push({ nx, ny });
		}
	}
	if (cnt > 0)
		cout << cnt;
	else
		cout << "TT";


}