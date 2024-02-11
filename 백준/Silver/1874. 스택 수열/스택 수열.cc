#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, num, idx = 1;
	stack<int> s;
	vector<char> v;
	bool correct = true;
	cin >> n;
	while (n > 0) {
		cin >> num;

		while (idx <= num) {
			s.push(idx++);
			v.push_back('+');
		}

		if (s.top() != num) {
			correct = false;
		}
		s.pop();
		v.push_back('-');
		n--;

	}
	if (correct == true) {
		for (auto x : v)
			cout << x << '\n';
	}
	else
		cout << "NO";

}