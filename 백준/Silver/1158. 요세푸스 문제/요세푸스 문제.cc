#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	queue<int> q;
	int n, k, tmp;
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		q.push(i);
	}
	cout << "<";
	while (!q.empty()) {
		if (q.size() == 1) {
			cout << q.front() << ">";
			q.pop();
		}
		else {
			for (int i = 1; i < k; i++) {
				tmp = q.front();
				q.pop();
				q.push(tmp);
			}
			cout << q.front() << ", ";
			q.pop();
		}
	}
	
	
	


}