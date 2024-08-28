#include<bits/stdc++.h>
using namespace std;

int board[26][26];
int n, m;
int ret = 0;

void func(int a, int b) {
    if (a > n) {
        ret++;
        return;
    }


    if (b > m) {
        func(a + 1, 1);
        return;
    }

    //네모를 놓을 수 있는 경우
    if (!board[a - 1][b] || !board[a][b - 1] || !board[a - 1][b - 1]) {
        board[a][b] = 1;
        func(a, b + 1);
        board[a][b] = 0;
    }

    func(a, b + 1);

}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(1, 1);
    cout << ret;

}
