#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n, m, t;
	int ret = 0;
	deque <int> dq;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		dq.push_back(i + 1);
	}
	while (m > 0) {
		cin >> t;
		int idx = find(dq.begin(), dq.end(), t) - dq.begin();
		while (dq.front() != t) {
			if (idx < dq.size() - idx) {
				int tmp = dq.front();
				dq.pop_front();
				dq.push_back(tmp);
				ret++;
			}
			else {
				int tmp = dq.back();
				dq.pop_back();
				dq.push_front(tmp);
				ret++;
			}
		}
		dq.pop_front();
		m--;

	}
	cout << ret;


}