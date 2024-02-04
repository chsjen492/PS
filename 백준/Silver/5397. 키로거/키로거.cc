#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int test_case;
	string input;
	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> input;
		list<char> l = {};
		auto t = l.begin();
		for (auto c : input) {
			if (c == '-') {
				if (t != l.begin()) {
					t=l.erase(--t);
				}
			}
			else if (c == '<') {
				if (t != l.begin())
					t--;
			}
			else if (c == '>') {
				if (t != l.end())
					t++;
			}
			else {
				l.insert(t, c);
				
			}
		}
		for (auto x : l)
			cout << x;
		cout << "\n";
	}


}