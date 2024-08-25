#include<bits/stdc++.h>
using namespace std;


int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int pic[101][101];
	for (int i = 0; i <= 100; i++) {
		fill(pic[i], pic[i] + 101, 0);
	}

	int n, m, x1, y1, x2, y2, ret=0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j <= x2; j++) {
			for (int k = y1; k <= y2; k++) {
				pic[j][k]++;
			}
		}
	}

	for (int i = 1; i <= 100; i++) {
		for (int j = 1; j <= 100; j++) {
			if (pic[i][j] > m) {
				ret++;
			}
		}
	}

	cout << ret;


}

