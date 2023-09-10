#include <iostream>
#include <algorithm>
#include<queue>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	int n, m;
	int num;
	int cnt = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		queue<pair<int,int>> q;
		priority_queue<int> p;
		cin >> n >> m;
		for (int j = 0; j < n; j++) {
			cin >> num;
			q.push({ j,num });
			p.push(num);
		}
		while (1) {
			if (q.front().second == p.top()) {
				if (q.front().first == m)
				{
					cout << cnt << "\n";
					break;
				}
				else {
					q.pop();
					p.pop();
					cnt++;
				}

			}
			else {
				q.push({ q.front().first, q.front().second });
				q.pop();
			}
		}
		cnt = 1;

	}
	
	
}