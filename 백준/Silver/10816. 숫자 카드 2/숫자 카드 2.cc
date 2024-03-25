#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n, m, tmp;
	map<int, int> mp;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> tmp;
		mp[tmp]++;
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		cout << mp[tmp] << " ";
	}

}