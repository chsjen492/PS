#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string str;
	bool good = true;
	int n, cnt=0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> str;
		stack<char> s;
		for (auto a : str) {
			if (s.empty()) {
				s.push(a);
			}
			else {
				if (s.top() == a) {
					s.pop();
				}
				else {
					s.push(a);
				}
			}
		}
		if (!s.empty())
			good = false;
		if (good == true)
			cnt++;
		good = true;
	}
	cout << cnt;

}