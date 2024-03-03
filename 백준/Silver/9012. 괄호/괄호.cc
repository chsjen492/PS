#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	string str;
	bool vps = true;
	cin >> t;
	while (t--) {
		stack<char> s;
		cin >> str;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			else {
				if(!s.empty())
					s.pop();
				else {
					vps = false;
					break;
				}
			}
		}
		if (s.empty()&& vps == true)
			cout << "YES\n";
		else
			cout << "NO\n";
		vps = true;
	}


}