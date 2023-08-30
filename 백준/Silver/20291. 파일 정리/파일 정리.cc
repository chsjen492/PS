#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <string>

using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	string f;
	string ex;
	map<string, int> m;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> f;
		for (int j = 0; j < f.length(); j++) {
			if (f[j] == '.') {
				ex = f.substr(j + 1, f.length() - j - 1);
				break;
			}
		}
		m[ex]++;
	}
	for (auto const& pair : m) {
		cout << pair.first << " " << pair.second << "\n";
	}

	
}