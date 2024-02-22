#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[100001] = {};
	queue<int> q;
	fill(arr, arr + 100001, -1); //배열을 -1로 초기화
	int n, k, cur, nx;

	cin >> n >> k;
	if (n == k) {
		cout << 0;
		return 0;
	}
	arr[n] = 0;
	q.push(n);
	while (!q.empty()) {
		cur = q.front();
		q.pop();
		for (int nx : {cur-1, cur+1, 2*cur}) {
			if (nx < 0 || nx>100000)
				continue;
			if (arr[nx] > -1)
				continue;
			if (nx == k) {
				cout << arr[cur] + 1;
				return 0;
			}
			arr[nx] = arr[cur] + 1;
			q.push(nx);
		}
	}




}