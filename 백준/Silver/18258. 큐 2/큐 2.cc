#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	const int MX = 2000005;
	int dat[MX];
	int head=0, tail=0;
	int n, x;
	string order;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> order;
		if (order == "push") {
			cin >> x;
			dat[tail++]=x;
		}
		else if (order == "pop") {
			if (tail!=head) {
				cout << dat[head++] << '\n';
			}
			else
				cout << -1 << '\n';
		}
		else if (order == "size") {
			cout << tail-head << '\n';
		}
		else if (order == "empty") {
			if (tail==head)
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
		}
		else if (order == "front") {
			if (tail==head) {
				cout << -1 << '\n';
			}
			else
				cout << dat[head] << '\n';
		}
		else {
			if (tail==head)
				cout << -1 << '\n';
			else
				cout << dat[tail-1] << '\n';
		}
	}
	
	
	


}