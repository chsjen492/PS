#include <bits/stdc++.h>
using namespace std;

queue<int> q;
stack<int> s;
long long graph[1001][1001];
bool visited[1001];
int N, M, V;

void dfs(int a) {
    visited[a] = true;
    cout << a << " ";
    for (int i = 1; i <= N; i++) {
        if (graph[a][i] == 1 && !visited[i])
            dfs(i);
    }
}

void bfs(int a) {
    q.push(a);
    visited[a] = true;
    while (!q.empty()) {
        int n = q.front();
        cout << n << " ";
        q.pop();
        for (int i = 1; i <= N; i++) {
            if (graph[n][i] == 1 && !visited[i]) {
                q.push(i);
                visited[i] = true;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    cin >> N >> M >> V; 

    int a, b;
    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        graph[a][b] = 1;
        graph[b][a] = 1;
    }

    dfs(V);
    cout << "\n";
    fill(visited, visited+1001, 0);
    bfs(V);

    return 0;
}