#include <iostream>
#include <algorithm>
using namespace std;

long long num[1000001] = { 0,1,2,3, };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	for (int i = 4; i < 1000001; i++) {
		num[i] = (num[i - 1] + num[i - 2])%15746;
	}
	cout << num[N];
}