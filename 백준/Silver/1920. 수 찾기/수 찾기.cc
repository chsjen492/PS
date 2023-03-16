#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M;
	int n;
	vector<int>v1;


	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		v1.push_back(n);
	}
	sort(v1.begin(), v1.end());
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> n;
		cout << binary_search(v1.begin(), v1.end(), n) << "\n";
	}

}