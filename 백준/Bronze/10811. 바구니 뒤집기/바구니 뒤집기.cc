#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int N, M, i, j;
	vector <int> v;
	cin >> N >> M;
	for (int k = 1; k <= N; k++) {
		v.push_back(k);
	}
	for (int k = 0; k < M; k++) {
		cin >> i >> j;
		if (i != j) {
			reverse(&v[i-1],&v[j]);
		}
	}
	for (int k = 0; k < N; k++) {
		cout << v[k] << " ";
	}

}