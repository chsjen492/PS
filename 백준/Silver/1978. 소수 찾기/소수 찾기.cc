#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool num[1001] = { 0, };
void eratos(int n) { //에라토스테네스의 체
	if (n <= 1)
		return;
	for (int i = 2; i <= n; i++) {
		num[i] = true;
	}
	for (int i = 2; i * i <= n; i++) {
		if (num[i])
			for (int j = i * i; j <= n; j += i)
				num[j] = false;
	}

}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int n;
	int m = 0;
	int cnt = 0;
	int arr[101] = { 0, };

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> n;
		arr[i] = n;
	}
	m = *max_element(arr, arr + 101);

	eratos(m);

	for (int i = 0; i < N; i++) {
		if (num[arr[i]] == true)
			cnt++;
	}
	cout << cnt;

}