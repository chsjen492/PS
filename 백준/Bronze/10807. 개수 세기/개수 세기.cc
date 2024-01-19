#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, v, t;
	int arr[201] = {};
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> t;
		arr[t + 100]++;
	}
	cin >> v;
	cout << arr[v + 100];
}