#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, height;
	cin >> n;
	stack<pair<int, int>> tower;
	tower.push({ 100000001, 0 }); //수신할 탑이 없는 경우
	for (int i = 1; i <= n; i++) {
		cin >> height;
		while (height > tower.top().first) {
			tower.pop();
		}
		cout << tower.top().second << " ";
		tower.push({ height, i });
	}

}