#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string in;
	int m;
	char command, add;
	list<char> l;

	cin >> in;
	for (auto x : in) {
		l.push_back(x);
	}
	auto c = l.end();
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> command;
		if (command == 'L')
			if (c != l.begin())
				c--;
		if (command == 'D')
			if (c != l.end())
				c++;
		if (command == 'B')
			if (c != l.begin())
				c = l.erase(--c);
		if (command == 'P') {
			cin >> add;
			l.insert(c, add);
		}

	}
	for (auto x : l) {
		cout << x;
	}


}