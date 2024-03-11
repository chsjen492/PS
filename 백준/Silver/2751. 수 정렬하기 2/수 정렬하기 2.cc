#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
	if (a < b)
		return true;
	if(a>b)
		return false;
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, t;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i < n; i++) {
		cout << v[i] << '\n';
	}

}