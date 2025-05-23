#include <bits/stdc++.h>
using namespace std;

int dx[6]= {0, 1, 0, -1, 0, 0};
int dy[6]= {1, 0, -1, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);

    int l, r, c;
    while (true) {
        cin >> l >> r >> c;
        if (l == 0 && r == 0 && c == 0) break;

        int board[31][31][31];
        tuple<int, int, int> start, end;
        string s;

        for (int i = 0; i < l; i++) {
            for (int j = 0; j < r; j++) {
                cin >> s;
                for (int k = 0; k < c; k++) {
                    char ch = s[k];
                    if (ch == 'S') {
                        start = {j, k, i};
                        board[j][k][i] = 0;
                    } else if (ch == 'E') {
                        end = {j, k, i};
                        board[j][k][i] = 0;
                    } else if (ch == '.') {
                        board[j][k][i] = 0;
                    } else {
                        board[j][k][i] = -1; // 벽(#)
                    }
                }
            }
        }

        queue<tuple<int, int, int, int>> q;
        auto [sx, sy, sz] = start;
        q.push({sx, sy, sz, 0});
        board[sx][sy][sz] = 1;

        int ret = -1;
        while (!q.empty()) {
            auto [x, y, z, t] = q.front(); q.pop();

            if (tie(x, y, z) == end) {
                ret = t;
                break;
            }

            for (int dir = 0; dir < 6; dir++) {
                int nx = x + dx[dir];
                int ny = y + dy[dir];
                int nz = z + dz[dir];

                if (nx < 0 || ny < 0 || nz < 0 || nx >= r || ny >= c || nz >= l) continue;
                if (board[nx][ny][nz] != 0) continue;

                board[nx][ny][nz] = 1;
                q.push({nx, ny, nz, t + 1});
            }
        }

        if (ret != -1) {
            cout << "Escaped in " << ret << " minute(s).\n";
        } else {
            cout << "Trapped!\n";
        }
    }
    return 0;
}
