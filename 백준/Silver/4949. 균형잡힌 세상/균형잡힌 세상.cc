#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;
	bool valid = true;
	while (1) {
		getline(cin, s);
		if (s == ".")
			break;
		stack<char> st;
		for (auto a : s) {
			if (a == '(' || a == '[') {
				st.push(a);
			}
			else if (a == ')') {
				if (st.empty() || st.top() != '(') {
					valid = false;
					break;
				}
				else
					st.pop();
			}
			else if (a == ']') {
				if (st.empty() || st.top() != '[') {
					valid = false;
					break;
				}
				else
					st.pop();
			}
		}
		if (!st.empty())
			valid = false;
		if (valid)
			cout << "yes\n";
		else
			cout << "no\n";
		valid = true;
	}

}