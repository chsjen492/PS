#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool compare(const pair<int,int> v1, const pair<int,int>v2) {
	if (v1.second == v2.second)
		return v1.first < v2.first;
	else
		return v2.second > v1.second;
}
int main(int argc, char** argv)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	vector<pair<int, int>> v;
	int N;
	cin >> N;
	int x, y;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(pair<int, int>(x, y));
	}
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}
}