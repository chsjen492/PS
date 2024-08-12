#include<bits/stdc++.h>
using namespace std;

long long arr[1025][1025];
int func(int n, int x, int y) {
	if (n == 2) {
		int tmp[4] = { arr[x][y], arr[x + 1][y], arr[x][y + 1], arr[x + 1][y + 1] };
		sort(tmp, tmp + 4);
		return tmp[2];
	}
	else {
		int tmp[4] = { 0, };
		tmp[0] = func(n / 2, x, y);
		tmp[1] = func(n / 2, x + n / 2, y);
		tmp[2] = func(n / 2, x, y + n / 2);
		tmp[3] = func(n / 2, x + n / 2, y + n / 2);
		sort(tmp, tmp + 4);
		return tmp[2];
	}
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	cout<<func(n, 0, 0);
	
}
	
