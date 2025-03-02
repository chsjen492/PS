#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, K;
	int temp;
	int sum = 0;
	int tem[100001] = { 0, };
    int mx = -987654321;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> temp;
		sum += temp;
		tem[i] = sum;
	}
	for (int i = K; i <= N ; i++) {
		mx=max(mx, (tem[i]-tem[i-K]));
	}
	cout << mx;
}