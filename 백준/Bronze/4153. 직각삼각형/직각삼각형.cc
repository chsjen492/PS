#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
	if (a > b)
		return true;
	else
		return false;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[3];
	while (1) {
		cin >> arr[0] >> arr[1] >> arr[2];
		if (arr[0] == 0 && arr[1] == 0 && arr[2] == 0) {
			return 0;
		}
		sort(arr, arr + 3, compare);
		if ((arr[0] * arr[0]) == (arr[1] * arr[1] + arr[2] * arr[2])) {
			cout << "right\n";
		}
		else
			cout << "wrong\n";
	}

}