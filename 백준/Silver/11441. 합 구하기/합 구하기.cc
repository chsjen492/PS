#include <iostream>
#include <algorithm>

using namespace std;



int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int arr[100001] = { 0, };
	int n;
	int num;
	int m;
	int i, j;
	cin >> n;
	for (int t = 1; t <= n; t++) {
		cin >> num;
		arr[t] = arr[t - 1] + num;
	}

	cin >> m;
	for (int k = 0; k< m; k++) {
		cin >> i >> j;
		cout << arr[j] - arr[i-1] << "\n";
	}
}