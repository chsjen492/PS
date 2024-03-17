#include <bits/stdc++.h>
using namespace std;

int white = 0;
int blue = 0;
int arr[128][128];
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
		if (arr[start1][start2] == 0)
			white++;
		if (arr[start1][start2] == 1)
			blue++;
		return;
	}
	else {
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				func(start1 + i * (n / 2), start2 + j * (n / 2), n / 2);
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
	cout << white << '\n' << blue;

}