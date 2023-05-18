#include <iostream>
#include <algorithm>
using namespace std;

long long num[91] = { 0,1,1, };
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;
	for (int i = 3; i < 91; i++) {
		num[i] = (num[i - 1] + num[i - 2]);
	}
	cout << num[N];
}