#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	string s;
	map<string, int> m;
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		m.insert({ s,i });

		reverse(s.begin(), s.end());
		if (m.find(s) != m.end())
		{
			cout << s.length() << " " << s[s.length() / 2];
		}
	}

	
	
	
	
}