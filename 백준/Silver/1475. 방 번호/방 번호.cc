#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[10] = {};
	int N;
	cin >> N;
	while (N > 0) {
		arr[N % 10]++;
		N /= 10;
	}
	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (i == 6 || i == 9)
			continue;
		m = max(m, arr[i]);
	}

	cout << max((arr[6] + arr[9]+1) / 2 , m);
}