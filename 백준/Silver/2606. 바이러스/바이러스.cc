#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

bool visit[101]; //방문한 노드
vector<int> graph[101]; //그래프
int infect = 0; //감염된 컴퓨터 수

void dfs(int x) {
	visit[x] = true; //방문했단 표시
	infect++; //감염된 컴퓨터 수 증가
	for (int i = 0; i < graph[x].size(); i++) {
		int y = graph[x][i];
		if (!visit[y]) //방문하지 않았으면 재귀로 dfs실행
			dfs(y);
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int com;
	int connect;
	int a, b;
	cin >> com;
	cin >> connect;
	for (int i = 0; i < connect; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);//그래프 연결시키기
	}
	dfs(1);
	cout << infect-1; //1번 컴퓨터 제외하고 감염된 컴퓨터 수 출력
	
}