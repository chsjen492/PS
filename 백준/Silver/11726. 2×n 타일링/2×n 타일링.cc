#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	int arr[1001] = { 0,1,2, };
	for (int i = 3; i <= n; i++) {
		arr[i] = (arr[i - 1] + arr[i - 2])%10007;
	}
	cout << arr[n];
}