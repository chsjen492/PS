#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, i, j, k;
	vector<int> v;
	cin >> N >> M;
	for (int p = 1; p <= N; p++) {
		v.push_back(p);
	}

	for (int p = 0; p < M; p++) {
		cin >> i >> j >> k;
		int t = i - 1;
		vector<int> tmp(v.begin() + i - 1, v.begin() + k - 1);
		v.insert(v.end() - (N - j), tmp.begin(), tmp.end());
		v.erase(v.begin() + i - 1, v.begin() + k - 1);
	}

	for (int p = 0; p < N; p++) {
		cout << v[p] << " ";
	}

}