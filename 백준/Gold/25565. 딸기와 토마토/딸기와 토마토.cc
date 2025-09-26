#include <bits/stdc++.h>
using namespace std;

int n, m, k;
vector<vector<int>> board;

string one_check() {
    int dx[2] = {1, -1};
    int dy[2] = {1, -1};

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (board[y][x] == 0) continue;

            bool check_x = false;
            bool check_y = false;

            for (int i = 0; i < 2; i++) {
                int nx = x + dx[i];
                if (0 <= nx && nx < m && board[y][nx] == 1) check_x = true;

                int ny = y + dy[i];
                if (0 <= ny && ny < n && board[ny][x] == 1) check_y = true;
            }

            if (check_x && check_y) {
                return to_string(y + 1) + " " + to_string(x + 1);
            }
        }
    }
    return "";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m >> k;
    board.assign(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int seed = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (board[i][j] == 1) seed++;
        }
    }

    if (2 * k == seed) {
        cout << 0 << "\n";
        return 0;
    }

    cout << 2 * k - seed << "\n";

    if (k == 1) {
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < m; x++) {
                if (board[y][x] == 1) {
                    cout << y + 1 << " " << x + 1 << "\n";
                    return 0;
                }
            }
        }
    }

    if (2 * k - 1 == seed) {
        string check = one_check();
        if (!check.empty()) {
            cout << check << "\n";
            return 0;
        }
    }

    int start_x = 2001, start_y = 2001;
    int end_x = -1, end_y = -1;

    for (int y = 0; y < n; y++) {
        for (int x = 0; x < m; x++) {
            if (board[y][x] == 1) {
                start_x = min(start_x, x);
                start_y = min(start_y, y);
                end_x = max(end_x, x);
                end_y = max(end_y, y);
            }
        }
    }

    if (start_x == end_x) {
        for (int i = 0; i < 2 * k - seed; i++) {
            cout << start_y + seed - k + i + 1 << " " << start_x + 1 << "\n";
        }
        return 0;
    }

    if (start_y == end_y) {
        for (int i = 0; i < 2 * k - seed; i++) {
            cout << start_y + 1 << " " << start_x + seed - k + i + 1 << "\n";
        }
        return 0;
    }

    return 0;
}
