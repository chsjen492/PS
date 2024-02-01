#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[100001] = {};
	bool c[2000001] = {};

	int n, t, x;
	int res = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t;
		arr[i] = t;
	}
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x-arr[i]>0&&c[x - arr[i]] == true)
			res++;
		c[arr[i]]=true;
	}

	cout << res;

}