#include <bits/stdc++.h>
using namespace std;

int first = 0;
int second = 0;
int third = 0;
int arr[2187][2187];
bool check(int start1, int start2, int n) {
	for (int i = start1; i < start1 + n; i++) {
		for (int j = start2; j < start2 + n; j++) {
			if (arr[start1][start2] != arr[i][j]) {
				return false;
			}
		}
	}
	return true;
}
void func(int start1, int start2, int n) {
	if (check(start1, start2, n)) {
		if (arr[start1][start2] == -1)
			first++;
		if (arr[start1][start2] == 0)
			second++;
		if (arr[start1][start2] == 1)
			third++;
		return;
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				func(start1 + i * (n / 3), start2 + j * (n / 3), n / 3);
			}
		}
	}

}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	func(0, 0, n);
	cout << first << '\n' << second << '\n' << third << '\n';

}