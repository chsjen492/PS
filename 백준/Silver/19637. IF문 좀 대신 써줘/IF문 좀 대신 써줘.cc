#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	int tmp;
	string name;
	cin >> n >> m;

	vector<int> limit;
	vector<string> style;
	for (int i = 0; i < n; i++) {
		cin >> name >> tmp;
		limit.push_back(tmp);
		style.push_back(name);
	}

	for (int i = 0; i < m; i++) {
		cin >> tmp;
		int idx = lower_bound(limit.begin(), limit.end(), tmp) - limit.begin();
		cout << style[idx] << "\n";
	}
}