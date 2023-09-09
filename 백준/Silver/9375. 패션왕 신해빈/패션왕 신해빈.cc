#include <iostream>
#include <algorithm>
#include<map>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t, n;
	string a, b;
	
	int cnt = 1;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> n;
		map<string, int> m;
		for (int j = 0; j < n; j++) {
			cin >> a >> b;
			m[b]++;
		}
		for (auto x : m) {
			cnt *= (x.second + 1);
		}
		cout << cnt - 1<<"\n";
		cnt = 1;

	}
	
	
}