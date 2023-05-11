#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, M, i, j;
	cin >> N >> M;
	int num;
	int arr[100001] = { 0, };
	for (int k = 1; k <= N; k++) {
		cin >> num;
		arr[k] = num;
		arr[k] += arr[k - 1];
	}
	for (int p = 0; p < M; p++) {
		cin >> i >> j;
		cout << arr[j] - arr[i - 1] << "\n";
	}
}