#include <bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	double sum = 0;;
	int arr[1001];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int m = *max_element(arr, arr + n);
	for (int i = 0; i < n; i++) {
		sum += (arr[i] / double(m) * 100.0);
	}
	cout << sum / double(n);

}