#include <iostream>
#include <algorithm>
using namespace std;

long long arr[1000001] = { 0,0,1,1 };

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	for (int i = 4; i <= N; i++) {
		arr[i] = arr[i - 1] + 1;
		if (i % 3 == 0) {
			arr[i] = min(arr[i / 3] + 1, arr[i]);
		}
		if (i % 2 == 0) {
			arr[i] = min(arr[i / 2] + 1, arr[i]);
		}

	}
	cout << arr[N]<<"\n";
}