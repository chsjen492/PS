#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<char> s;
	string str;
	int sum = 0;
	int tmp = 1;
	bool isopen = false;
	cin >> str;
	for (auto a : str) {
		if (a == '(') {
			s.push(a);
			tmp *= 2;
			isopen = true;
		}
		if (a == '[') {
			tmp *= 3;
			s.push(a);
			isopen = true;
		}
		if (a == ')') {
			if (s.empty() || s.top()!='(') {
				cout << 0;
				return 0;
			}
			s.pop();
			if (isopen == true)
				sum += tmp;
			tmp /= 2;
			isopen = false;
		}
		if (a == ']') {
			if (s.empty() || s.top()!='[') {
				cout<<0;
				return 0;
			}
			s.pop();
			if (isopen == true)
				sum += tmp;
			tmp /= 3;
			isopen = false;
		}
	}
	if (!s.empty()) {
		cout << 0;
		return 0;
	}
	cout << sum;

}